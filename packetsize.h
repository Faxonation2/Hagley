#ifndef PACKETSIZE_H
#define PACKETSIZE_H

#include <QObject>
#include<QDebug>
#include<QString>
#include<QByteArray>


class packetsize : public QObject
{
    Q_OBJECT
public:
    explicit packetsize(QObject *parent = 0);


private:
    QMap<int, int> size_map = {{0x6E, 0}, {0x6F, 1}, {0x70, 2}, {0x71, 3}, {0x72, 4}, {0x73, 5}, {0x74, 6}, {0x75, 7}, {0x76, 8},
                                            {0x77, 9}, {0x78, 10}, {0x79, 11}, {0x7A, 12}, {0x7B, 13}, {0x7C, 14}, {0x7D, 15}, {0x7E, 16}, {0x7F, 17},
                                            {0x80, 18}, {0x81, 19}, {0x82, 20}, {0x83, 21}, {0x84, 22}, {0x85, 23}, {0x86, 24}, {0x87, 25}, {0x88, 26},
                                            {0x89, 27}, {0x8A, 28}, {0x8B, 29}, {0x8C, 30}, {0x8D, 31}, {0x8E, 32}, {0x8F, 33}, {0x90, 34}, {0x91, 35},
                                            {0x92, 36}, {0x93, 37}, {0x94, 38}, {0x95, 39}, {0x96, 40}, {0x97, 41}, {0x98, 42}, {0x99, 43}, {0x9A, 44},
                                            {0x9B, 45}, {0x9C, 46}, {0x9D, 47}, {0x9E, 48}, {0x9F, 49}, {0xA0, 50}, {0xA1, 51}, {0xA2, 52}, {0xA3, 53},
                                            {0xA4, 54}, {0xA5, 55}, {0xA6, 56}, {0xA7, 57}, {0xA8, 58}, {0xA9, 59}, {0xAA, 60}, {0xAB, 61}, {0xAC, 62},
                                            {0xAD, 63}, {0xAE, 64}, {0xAF, 65}, {0xB0, 66}, {0xB1, 67}, {0xB2, 68}, {0xB3, 69}, {0xB4, 70}, {0xB5, 71},
                                            {0xB6, 72}, {0xB7, 73}, {0xB8, 74}, {0xB9, 75}, {0xBA, 76}, {0xBB, 77}, {0xBC, 78}, {0xBD, 79}, {0xBE, 80},
                                            {0xBF, 81}, {0xC0, 82}, {0xC1, 83}, {0xC2, 84}, {0xC3, 85}, {0xC4, 86}, {0xC5, 87}, {0xC6, 88}, {0xC7, 89},
                                            {0xC8, 90}, {0xC9, 91}, {0xCA, 92}, {0xCB, 93}, {0xCC, 94}, {0xCD, 95}, {0xCE, 96}, {0xCF, 97}, {0xD0, 98},
                                            {0xD1, 99}, {0xD2, 100}, {0xD3, 101}, {0xD4, 102}, {0xD5, 103}, {0xD6, 104}, {0xD7, 105}, {0xD8, 106}, {0xD9, 107},
                                            {0xDA, 108}, {0xDB, 109}, {0xDC, 110}, {0xDD, 111}, {0xDE, 112}, {0xDF, 113}, {0xE0, 114}, {0xE1, 115}, {0xE2, 116},
                                            {0xE3, 117}, {0xE4, 118}, {0xE5, 119}, {0xE6, 120}, {0xE7, 121}, {0xE8, 122}, {0xE9, 123}, {0xEA, 124}, {0xEB, 125},
                                            {0xEC, 126}, {0xED, 127}, {0xEE, 128}, {0xEF, 129}, {0xF0, 130}, {0xF1, 131}, {0xF2, 132}, {0xF3, 133}, {0xF4, 134},
                                            {0xF5, 135}, {0xF6, 136}, {0xF7, 137}, {0xF8, 138}, {0xF9, 139}, {0xFA, 140}, {0xFB, 141}, {0xFC, 142}, {0xFD, 143},
                                            {0xFE, 144}, {0xFF, 145}};

signals:

public slots:
 QByteArray switchsize(QByteArray mainsize);


};

#endif // PACKETSIZE_H
