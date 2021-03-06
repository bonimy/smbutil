﻿/************************************************************************************

                                  smb Utility

  File: objdata.h
  Description:
  History:

 ************************************************************************************/

#pragma once

SMBMAPOBJECTINFO smbMapObjectInfo0B[24];

SMBMAPOBJECTINFO smbMapObjectInfoC[8];

SMBMAPOBJECTINFO smbMapObjectInfoD[17];

SMBMAPOBJECTINFO smbMapObjectInfoE[2];

SMBMAPOBJECTINFO smbMapObjectInfoF[9];

int GetNum0BMapObject(){return sizeof(smbMapObjectInfo0B) / sizeof(SMBMAPOBJECTINFO);}
int GetNumCMapObject() {return sizeof(smbMapObjectInfoC) / sizeof(SMBMAPOBJECTINFO);}
int GetNumDMapObject() {return sizeof(smbMapObjectInfoD) / sizeof(SMBMAPOBJECTINFO);}
int GetNumEMapObject() {return sizeof(smbMapObjectInfoE) / sizeof(SMBMAPOBJECTINFO);}
int GetNumFMapObject() {return sizeof(smbMapObjectInfoF) / sizeof(SMBMAPOBJECTINFO);}

struct { LPTSTR Name; }smbMapBasicBlock[16];

LPTSTR smbMapHeadTime[4];

LPTSTR smbMapHeadPosition[8];

LPTSTR smbMapHeadBackColor[8];

LPTSTR smbMapHeadMapType[4];

LPTSTR smbMapHeadView[4];

SMBBADGUYSINFO smbBudGuysInfo[64];

void InitializeObjectDataStrings()
{
    SMBMAPOBJECTINFO temp1[] = {
        GetResourceString(IDS_OBJDATA_MAP_B_01), 0x7F, 0x00, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_02), 0x7F, 0x01, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_03), 0x7F, 0x02, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_04), 0x7F, 0x03, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_05), 0x7F, 0x04, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_06), 0x7F, 0x05, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_07), 0x7F, 0x06, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_08), 0x7F, 0x07, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_09), 0x7F, 0x08, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_10), 0x7F, 0x09, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_11), 0x7F, 0x0A, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_12), 0x7F, 0x0B, 0x00, 0x00,  0, GetResourceString(IDS_OBJDATA_HELP_B12),
        GetResourceString(IDS_OBJDATA_MAP_B_13), 0x7F, 0x0C, 0x00, 0x00,  0, GetResourceString(IDS_OBJDATA_HELP_B13),
        GetResourceString(IDS_OBJDATA_MAP_B_14), 0x7F, 0x0D, 0x00, 0x00,  0, GetResourceString(IDS_OBJDATA_HELP_B14),
        GetResourceString(IDS_OBJDATA_MAP_B_15), 0x7F, 0x0E, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_16), 0x7F, 0x0F, 0x00, 0x00,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_17), 0x70, 0x10, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_18), 0x70, 0x20, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_19), 0x70, 0x30, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_20), 0x70, 0x40, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_21), 0x70, 0x50, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_22), 0x70, 0x60, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_B_23), 0x78, 0x70, 0x01, 0x07, -1, GetResourceString(IDS_OBJDATA_HELP_B23),
        GetResourceString(IDS_OBJDATA_MAP_B_24), 0x78, 0x78, 0x01, 0x07, -1, GetResourceString(IDS_OBJDATA_HELP_B23)
    };
    memcpy(smbMapObjectInfo0B, temp1, sizeof(temp1));

    SMBMAPOBJECTINFO temp2[] = {
        GetResourceString(IDS_OBJDATA_MAP_C_01), 0x70, 0x00, 0x01, 0x0F, -1, GetResourceString(IDS_OBJDATA_HELP_C01),
        GetResourceString(IDS_OBJDATA_MAP_C_02), 0x70, 0x10, 0x01, 0x0F, -1, GetResourceString(IDS_OBJDATA_HELP_C02),
        GetResourceString(IDS_OBJDATA_MAP_C_03), 0x70, 0x20, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_C_04), 0x70, 0x30, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_C_05), 0x70, 0x40, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_C_06), 0x70, 0x50, 0x01, 0x0F, -1, GetResourceString(IDS_OBJDATA_HELP_C06),
        GetResourceString(IDS_OBJDATA_MAP_C_07), 0x70, 0x60, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_C_08), 0x70, 0x70, 0x01, 0x0F, -1, GetResourceString(IDS_NULL)
    };
    memcpy(smbMapObjectInfoC, temp2, sizeof(temp2));

    SMBMAPOBJECTINFO temp3[] = {
        GetResourceString(IDS_OBJDATA_MAP_D_01), 0x40, 0x00, 0x01, 0x3F, 0, GetResourceString(IDS_OBJDATA_HELP_D01),
        GetResourceString(IDS_OBJDATA_MAP_D_02), 0x7F, 0x40, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_03), 0x7F, 0x41, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D03),
        GetResourceString(IDS_OBJDATA_MAP_D_04), 0x7F, 0x42, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D04),
        GetResourceString(IDS_OBJDATA_MAP_D_05), 0x7F, 0x43, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D05),
        GetResourceString(IDS_OBJDATA_MAP_D_06), 0x7F, 0x44, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D06),
        GetResourceString(IDS_OBJDATA_MAP_D_07), 0x7F, 0x45, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_08), 0x7F, 0x46, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_08), 0x7F, 0x47, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_10), 0x7F, 0x48, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_11), 0x7F, 0x49, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_12), 0x7F, 0x4A, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D12),
        GetResourceString(IDS_OBJDATA_MAP_D_13), 0x7F, 0x4B, 0x00, 0x00, 0, GetResourceString(IDS_OBJDATA_HELP_D13),
        GetResourceString(IDS_OBJDATA_MAP_D_14), 0x7F, 0x4C, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_15), 0x7F, 0x4D, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_15), 0x7F, 0x4E, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_D_15), 0x7F, 0x4F, 0x00, 0x00, 0, GetResourceString(IDS_NULL)
    };
    memcpy(smbMapObjectInfoD, temp3, sizeof(temp3));

    SMBMAPOBJECTINFO temp4[] = {
        GetResourceString(IDS_OBJDATA_MAP_E_01), 0x40, 0x00, 0x00, 0x00, 0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_E_02), 0x40, 0x40, 0x00, 0x00, 0, GetResourceString(IDS_NULL)
    };
    memcpy(smbMapObjectInfoE, temp4, sizeof(temp4));

    SMBMAPOBJECTINFO temp5[] = {
        GetResourceString(IDS_OBJDATA_MAP_F_01), 0x70, 0x00, 0x01, 0x0F,  0, GetResourceString(IDS_OBJDATA_HELP_F01),
        GetResourceString(IDS_OBJDATA_MAP_F_02), 0x70, 0x10, 0x01, 0x0F, -1, GetResourceString(IDS_OBJDATA_HELP_F02),
        GetResourceString(IDS_OBJDATA_MAP_F_03), 0x70, 0x20, 0x01, 0x0F,  0, GetResourceString(IDS_OBJDATA_HELP_F03),
        GetResourceString(IDS_OBJDATA_MAP_F_04), 0x78, 0x30, 0x01, 0x07, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_F_05), 0x78, 0x38, 0x01, 0x07,  0, GetResourceString(IDS_OBJDATA_HELP_F05),
        GetResourceString(IDS_OBJDATA_MAP_F_06), 0x70, 0x40, 0x01, 0x0F, -1, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_F_07), 0x70, 0x50, 0x01, 0x0F, -1, GetResourceString(IDS_OBJDATA_HELP_F07),
        GetResourceString(IDS_OBJDATA_MAP_F_08), 0x70, 0x60, 0x01, 0x0F,  0, GetResourceString(IDS_NULL),
        GetResourceString(IDS_OBJDATA_MAP_F_08), 0x70, 0x70, 0x01, 0x0F,  0, GetResourceString(IDS_NULL)
    };
    memcpy(smbMapObjectInfoF, temp5, sizeof(temp5));

    struct { LPTSTR Name; }temp6[] = {
        GetResourceString(IDS_OBJDATA_BB_01), GetResourceString(IDS_OBJDATA_BB_02), GetResourceString(IDS_OBJDATA_BB_03), GetResourceString(IDS_OBJDATA_BB_04),
        GetResourceString(IDS_OBJDATA_BB_05), GetResourceString(IDS_OBJDATA_BB_06), GetResourceString(IDS_OBJDATA_BB_07), GetResourceString(IDS_OBJDATA_BB_08),
        GetResourceString(IDS_OBJDATA_BB_09), GetResourceString(IDS_OBJDATA_BB_10), GetResourceString(IDS_OBJDATA_BB_11), GetResourceString(IDS_OBJDATA_BB_12),
        GetResourceString(IDS_OBJDATA_BB_13), GetResourceString(IDS_OBJDATA_BB_14), GetResourceString(IDS_OBJDATA_BB_15), GetResourceString(IDS_OBJDATA_BB_16)
    };
    memcpy(smbMapBasicBlock, temp6, sizeof(temp6));

    LPTSTR temp7[] = {
        GetResourceString(IDS_OBJDATA_T_01),
        GetResourceString(IDS_OBJDATA_T_02),
        GetResourceString(IDS_OBJDATA_T_03),
        GetResourceString(IDS_OBJDATA_T_04)
    };
    memcpy(smbMapHeadTime, temp7, sizeof(temp7));

    LPTSTR temp8[] = {
        GetResourceString(IDS_OBJDATA_P_01),
        GetResourceString(IDS_OBJDATA_P_02),
        GetResourceString(IDS_OBJDATA_P_03),
        GetResourceString(IDS_OBJDATA_P_04),
        GetResourceString(IDS_OBJDATA_P_01),
        GetResourceString(IDS_OBJDATA_P_01),
        GetResourceString(IDS_OBJDATA_P_07),
        GetResourceString(IDS_OBJDATA_P_07)
    };
    memcpy(smbMapHeadPosition, temp8, sizeof(temp8));

    LPTSTR temp9[] = {
        GetResourceString(IDS_OBJDATA_BC_01),
        GetResourceString(IDS_OBJDATA_BC_02),
        GetResourceString(IDS_OBJDATA_BC_03),
        GetResourceString(IDS_OBJDATA_BC_04),
        GetResourceString(IDS_OBJDATA_BC_05),
        GetResourceString(IDS_OBJDATA_BC_06),
        GetResourceString(IDS_OBJDATA_BC_07),
        GetResourceString(IDS_OBJDATA_BC_08)
    };
    memcpy(smbMapHeadBackColor, temp9, sizeof(temp9));

    LPTSTR tempA[] = {
        GetResourceString(IDS_OBJDATA_MT_01),
        GetResourceString(IDS_OBJDATA_MT_02),
        GetResourceString(IDS_OBJDATA_MT_03),
        GetResourceString(IDS_OBJDATA_MT_04)
    };
    memcpy(smbMapHeadMapType, tempA, sizeof(tempA));

    LPTSTR tempB[] = {
        GetResourceString(IDS_OBJDATA_V_01),
        GetResourceString(IDS_OBJDATA_V_02),
        GetResourceString(IDS_OBJDATA_V_03),
        GetResourceString(IDS_OBJDATA_V_04)
    };
    memcpy(smbMapHeadView, tempB, sizeof(tempB));

    SMBBADGUYSINFO tempC[] = {
        GetResourceString(IDS_OBJDATA_BADGUYS_01), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_02), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_03), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_04), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_05), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_06), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_07), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_08), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_09), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_10), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_11), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_12), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_13), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_14), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_15), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_16), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_17), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_18), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_19), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_20), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_21),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_22),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_23),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_24),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_28), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_29), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_30), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_31), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_32), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_33), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_33), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_33), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_37), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_38), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_39), -2, 0x00,  1,
        GetResourceString(IDS_OBJDATA_BADGUYS_40), -2, 0x00,  1,
        GetResourceString(IDS_OBJDATA_BADGUYS_41), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_42), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_43), -2, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_44), -2, 0x00,  1,
        GetResourceString(IDS_OBJDATA_BADGUYS_45), -2, 0x00,  1,
        GetResourceString(IDS_OBJDATA_BADGUYS_46), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_47), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_48), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_51), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_53), -1, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_54),  0, 0x09,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_23),  0, 0x00,  0,
        GetResourceString(IDS_OBJDATA_BADGUYS_56),  0, 0x0A, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_57),  0, 0x0A, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_58),  0, 0x06, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_59),  0, 0x06, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_60),  0, 0x0A, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_61),  0, 0x0A, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_62),  0, 0x06, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_63),  0, 0x06, -3,
        GetResourceString(IDS_OBJDATA_BADGUYS_25),  0, 0x00,  0
    };
    memcpy(smbBudGuysInfo, tempC, sizeof(tempC));
}