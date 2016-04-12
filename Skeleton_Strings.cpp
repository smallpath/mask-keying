/*******************************************************************/
/*                                                                 */
/*                      ADOBE CONFIDENTIAL                         */
/*                   _ _ _ _ _ _ _ _ _ _ _ _ _                     */
/*                                                                 */
/* Copyright 2007 Adobe Systems Incorporated                       */
/* All Rights Reserved.                                            */
/*                                                                 */
/* NOTICE:  All information contained herein is, and remains the   */
/* property of Adobe Systems Incorporated and its suppliers, if    */
/* any.  The intellectual and technical concepts contained         */
/* herein are proprietary to Adobe Systems Incorporated and its    */
/* suppliers and may be covered by U.S. and Foreign Patents,       */
/* patents in process, and are protected by trade secret or        */
/* copyright law.  Dissemination of this information or            */
/* reproduction of this material is strictly forbidden unless      */
/* prior written permission is obtained from Adobe Systems         */
/* Incorporated.                                                   */
/*                                                                 */
/*******************************************************************/

#include "Skeleton.h"

typedef struct {
	A_u_long	index;
	A_char		str[256];
} TableString;



TableString		g_strs[StrID_NUMTYPES] = {
	StrID_NONE,							"",
	StrID_Name,							"Sp Mask Key v1.0",
	StrID_Description,					"My first plug-in.\r\rRemove pixels around every mask point,based on pixel threshold.\rFor your keying pleasure.\r\rCopyright 2015 Smallpath.",
	StrID_Flood_Seed_Param_Name,		"Mask",
	StrID_BG_Param_Name,				"BG Threshold",
	StrID_Set_Mask_Param_Name,			"",
};


char	*GetStringPtr(int strNum)
{
	return g_strs[strNum].str;
}
	