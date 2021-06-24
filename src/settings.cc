//
// Created by Sakata on 2021/6/24.
//

#include "include/settings.h"

#define HORIZONTAL_HEADER_STATE_KEY "holding_tab/horizontal_header_state"

Settings::Settings(const QString &path, QObject *parent) : QObject(parent) {
    m_settings = new QSettings(path, QSettings::IniFormat, parent);
}

void Settings::save_horizontal_header_state_to_settings(const QByteArray &state) {
    m_settings->setValue(HORIZONTAL_HEADER_STATE_KEY, state);

}

QByteArray Settings::load_horizontal_header_state_to_settings() {
    return m_settings->value(HORIZONTAL_HEADER_STATE_KEY).toByteArray();
}