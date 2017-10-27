#pragma once

// MFC�Ŏg�����p
/*#ifdef _DEBUG
#undef new
#endif
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
*/

#include "ColorDef.h"

//���������W��
//G�Z�b�g
#define MF_JIS_KANJI1 0x39 //JIS�݊�����1��
#define MF_JIS_KANJI2 0x3A //JIS�݊�����2��
#define MF_KIGOU 0x3B //�ǉ��L��
#define MF_ASCII 0x4A //�p��
#define MF_HIRA  0x30 //������
#define MF_KANA  0x31 //�Љ���
#define MF_KANJI 0x42 //����
#define MF_MOSAIC_A 0x32 //���U�C�NA
#define MF_MOSAIC_B 0x33 //���U�C�NB
#define MF_MOSAIC_C 0x34 //���U�C�NC
#define MF_MOSAIC_D 0x35 //���U�C�ND
#define MF_PROP_ASCII 0x36 //�v���|�[�V���i���p��
#define MF_PROP_HIRA  0x37 //�v���|�[�V���i��������
#define MF_PROP_KANA  0x38 //�v���|�[�V���i���Љ���
#define MF_JISX_KANA 0x49 //JIX X0201�Љ���
//DRCS
#define MF_DRCS_0 0x40 //DRCS-0
#define MF_DRCS_1 0x41 //DRCS-1
#define MF_DRCS_2 0x42 //DRCS-2
#define MF_DRCS_3 0x43 //DRCS-3
#define MF_DRCS_4 0x44 //DRCS-4
#define MF_DRCS_5 0x45 //DRCS-5
#define MF_DRCS_6 0x46 //DRCS-6
#define MF_DRCS_7 0x47 //DRCS-7
#define MF_DRCS_8 0x48 //DRCS-8
#define MF_DRCS_9 0x49 //DRCS-9
#define MF_DRCS_10 0x4A //DRCS-10
#define MF_DRCS_11 0x4B //DRCS-11
#define MF_DRCS_12 0x4C //DRCS-12
#define MF_DRCS_13 0x4D //DRCS-13
#define MF_DRCS_14 0x4E //DRCS-14
#define MF_DRCS_15 0x4F //DRCS-15
#define MF_MACRO 0x70 //�}�N��

//�����W���̕���
#define MF_MODE_G 1 //G�Z�b�g
#define MF_MODE_DRCS 2 //DRCS
#define MF_MODE_OTHER 3 //���̑�

#ifdef ARIB8CHAR_DECODE_H_IMPLEMENT_TABLE

static const WCHAR AsciiTable[]={
	L'�I', L'�h', L'��', L'��', L'��', L'��', L'�f',
	L'�i', L'�j', L'��', L'�{', L'�C', L'�|', L'�D', L'�^',
	L'�O', L'�P', L'�Q', L'�R', L'�S', L'�T', L'�U', L'�V',
	L'�W', L'�X', L'�F', L'�G', L'��', L'��', L'��', L'�H',
	L'��', L'�`', L'�a', L'�b', L'�c', L'�d', L'�e', L'�f',
	L'�g', L'�h', L'�i', L'�j', L'�k', L'�l', L'�m', L'�n',
	L'�o', L'�p', L'�q', L'�r', L'�s', L'�t', L'�u', L'�v',
	L'�w', L'�x', L'�y', L'�m', L'��', L'�n', L'�O', L'�Q',
	L'�e', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'�o', L'�b', L'�p', L'�P'
};
static const WCHAR HiraTable[]={
	L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'�@', L'�@', L'�@', L'�T',
	L'�U', L'�[', L'�B', L'�u', L'�v', L'�A', L'�E'
};
static const WCHAR KanaTable[]={
	L'�@', L'�A', L'�B', L'�C', L'�D', L'�E', L'�F',
	L'�G', L'�H', L'�I', L'�J', L'�K', L'�L', L'�M', L'�N',
	L'�O', L'�P', L'�Q', L'�R', L'�S', L'�T', L'�U', L'�V',
	L'�W', L'�X', L'�Y', L'�Z', L'�[', L'�\', L'�]', L'�^',
	L'�_', L'�`', L'�a', L'�b', L'�c', L'�d', L'�e', L'�f',
	L'�g', L'�h', L'�i', L'�j', L'�k', L'�l', L'�m', L'�n',
	L'�o', L'�p', L'�q', L'�r', L'�s', L'�t', L'�u', L'�v',
	L'�w', L'�x', L'�y', L'�z', L'�{', L'�|', L'�}', L'�~',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'��',
	L'��', L'��', L'��', L'��', L'��', L'��', L'��', L'�R',
	L'�S', L'�[', L'�B', L'�u', L'�v', L'�A', L'�E'
};

struct GAIJI_TABLE{
	unsigned short usARIB8;
	const WCHAR* strChar;
};

static const GAIJI_TABLE GaijiTable[]={
	{0x7A4D, L"10."},
	{0x7A4E, L"11."},
	{0x7A4F, L"12."},
	{0x7A50, L"[HV]"}, //90��48�_
	{0x7A51, L"[SD]"},
	{0x7A52, L"[�o]"},
	{0x7A53, L"[�v]"},
	{0x7A54, L"[MV]"},
	{0x7A55, L"[��]"},
	{0x7A56, L"[��]"},
	{0x7A57, L"[�o]"},
	{0x7A58, L"[�f]"},
	{0x7A59, L"[�r]"},
	{0x7A5A, L"[��]"},
	{0x7A5B, L"[��]"},
	{0x7A5C, L"[��]"},
	{0x7A5D, L"[SS]"},
	{0x7A5E, L"[�a]"},
	{0x7A5F, L"[�m]"},//
	{0x7A60, L"��"},//90��64�_
	{0x7A61, L"��"},
	{0x7A62, L"[�V]"},
	{0x7A63, L"[��]"},
	{0x7A64, L"[�f]"},
	{0x7A65, L"[��]"},
	{0x7A66, L"[��]"},
	{0x7A67, L"[�E]"},
	{0x7A68, L"[�O]"},
	{0x7A69, L"[��]"},
	{0x7A6A, L"[��]"},
	{0x7A6B, L"[�V]"},
	{0x7A6C, L"[��]"},
	{0x7A6D, L"[�I]"},
	{0x7A6E, L"[��]"},
	{0x7A6F, L"[��]"},
	{0x7A70, L"[��]"},//90��80�_
	{0x7A71, L"[��]"},
	{0x7A72, L"[PPV]"},
	{0x7A73, L"(��)"},
	{0x7A74, L"�ق�"},
	//91��͔�΂�
	{0x7C21, L"��"},//92��1�_
	{0x7C22, L"��"},
	{0x7C23, L"��"},
	{0x7C24, L"��"},
	{0x7C25, L"��"},
	{0x7C26, L"��"},
	{0x7C27, L"�N"},
	{0x7C28, L"��"},
	{0x7C29, L"��"},
	{0x7C2A, L"�~"},
	{0x7C2B, L"m^2"},
	{0x7C2C, L"m^3"},
	{0x7C2D, L"cm"},
	{0x7C2E, L"cm^2"},
	{0x7C2F, L"cm^3"},
	{0x7C30, L"�O."},//92��16�_
	{0x7C31, L"�P."},
	{0x7C32, L"�Q."},
	{0x7C33, L"�R."},
	{0x7C34, L"�S."},
	{0x7C35, L"�T."},
	{0x7C36, L"�U."},
	{0x7C37, L"�V."},
	{0x7C38, L"�W."},
	{0x7C39, L"�X."},
	{0x7C3A, L"��"},
	{0x7C3B, L"��"},
	{0x7C3C, L"��"},
	{0x7C3D, L"��"},
	{0x7C3E, L"�O"},
	{0x7C3F, L"�V"},
	{0x7C40, L"�O,"},//92��32�_
	{0x7C41, L"�P,"},
	{0x7C42, L"�Q,"},
	{0x7C43, L"�R,"},
	{0x7C44, L"�S,"},
	{0x7C45, L"�T,"},
	{0x7C46, L"�U,"},
	{0x7C47, L"�V,"},
	{0x7C48, L"�W,"},
	{0x7C49, L"�X,"},
	{0x7C4A, L"[��]"},
	{0x7C4B, L"[��]"},
	{0x7C4C, L"[�L]"},
	{0x7C4D, L"[��]"},
	{0x7C4E, L"[��]"},
	{0x7C4F, L"(��)"},
	{0x7C50, L"��"},//92��48�_
	{0x7C51, L"��"},
	{0x7C52, L"�y"},
	{0x7C53, L"�z"},
	{0x7C54, L"��"},
	{0x7C55, L"^2"},
	{0x7C56, L"^3"},
	{0x7C57, L"(CD)"},
	{0x7C58, L"(vn)"},
	{0x7C59, L"(ob)"},
	{0x7C5A, L"(cb)"},
	{0x7C5B, L"(ce"},
	{0x7C5C, L"mb)"},
	{0x7C5D, L"(hp)"},
	{0x7C5E, L"(br)"},
	{0x7C5F, L"(��)"},
	{0x7C60, L"(��)"},//92��64�_
	{0x7C61, L"(ms)"},
	{0x7C62, L"(��)"},
	{0x7C63, L"(bs)"},
	{0x7C64, L"(��)"},
	{0x7C65, L"(tb)"},
	{0x7C66, L"(tp)"},
	{0x7C67, L"(ds)"},
	{0x7C68, L"(ag)"},
	{0x7C69, L"(eg)"},
	{0x7C6A, L"(vo)"},
	{0x7C6B, L"(fl)"},
	{0x7C6C, L"(ke"},
	{0x7C6D, L"y)"},
	{0x7C6E, L"(sa"},
	{0x7C6F, L"x)"},
	{0x7C70, L"(sy"},//92��80�_
	{0x7C71, L"n)"},
	{0x7C72, L"(or"},
	{0x7C73, L"g)"},
	{0x7C74, L"(pe"},
	{0x7C75, L"r)"},
	{0x7C76, L"(�q)"},
	{0x7C77, L"(�b)"},
	{0x7C78, L"(�)"},
	{0x7C79, L"�c�i"},
	{0x7C7A, L"[��]"},
	{0x7C7B, L"Fax"},
	{0x7D21, L"(��)"},//93��1�_
	{0x7D22, L"(��)"},
	{0x7D23, L"(��)"},
	{0x7D24, L"(��)"},
	{0x7D25, L"(��)"},
	{0x7D26, L"(�y)"},
	{0x7D27, L"(��)"},
	{0x7D28, L"(�j)"},
	{0x7D29, L"��"},
	{0x7D2A, L"��"},
	{0x7D2B, L"��"},
	{0x7D2C, L"�~"},
	{0x7D2D, L"No."},
	{0x7D2E, L"Tel"},
	{0x7D2F, L"(��)"},
	{0x7D30, L"()()"},//93��16�_
	{0x7D31, L"[�{]"},
	{0x7D32, L"[�O]"},
	{0x7D33, L"[��]"},
	{0x7D34, L"[��]"},
	{0x7D35, L"[�_]"},
	{0x7D36, L"[��]"},
	{0x7D37, L"[��]"},
	{0x7D38, L"[��]"},
	{0x7D39, L"[�s]"},
	{0x7D3A, L"[�r]"},
	{0x7D3B, L"[��]"},
	{0x7D3C, L"[��]"},
	{0x7D3D, L"[��]"},
	{0x7D3E, L"[��]"},
	{0x7D3F, L"[�O]"},
	{0x7D40, L"[�V]"},//93��32�_
	{0x7D41, L"[��]"},
	{0x7D42, L"[��]"},
	{0x7D43, L"[�E]"},
	{0x7D44, L"[�w]"},
	{0x7D45, L"[��]"},
	{0x7D46, L"[��]"},
	{0x7D47, L"l"},
	{0x7D48, L"kg"},
	{0x7D49, L"Hz"},
	{0x7D4A, L"ha"},
	{0x7D4B, L"km"},
	{0x7D4C, L"km^2"},
	{0x7D4D, L"hPa"},
	{0x7D4E, L"�E"},
	{0x7D4F, L"�E"},
	{0x7D50, L"1/2"},//93��48�_
	{0x7D51, L"0/3"},
	{0x7D52, L"1/3"},
	{0x7D53, L"2/3"},
	{0x7D54, L"1/4"},
	{0x7D55, L"3/4"},
	{0x7D56, L"1/5"},
	{0x7D57, L"2/5"},
	{0x7D58, L"3/5"},
	{0x7D59, L"4/5"},
	{0x7D5A, L"1/6"},
	{0x7D5B, L"5/6"},
	{0x7D5C, L"1/7"},
	{0x7D5D, L"1/8"},
	{0x7D5E, L"1/9"},
	{0x7D5F, L"1/10"},
	{0x7D6E, L"!!"},//93��78�_
	{0x7D6F, L"!?"},
	{0x7E21, L"�T"},//94��1�_
	{0x7E22, L"�U"},
	{0x7E23, L"�V"},
	{0x7E24, L"�W"},
	{0x7E25, L"�X"},
	{0x7E26, L"�Y"},
	{0x7E27, L"�Z"},
	{0x7E28, L"�["},
	{0x7E29, L"�\"},
	{0x7E2A, L"�]"},
	{0x7E2B, L"XI"},
	{0x7E2C, L"XII"},
	{0x7E2D, L"�P"},
	{0x7E2E, L"�Q"},
	{0x7E2F, L"�R"},
	{0x7E30, L"�S"},//94��16�_
	{0x7E31, L"(�P)"},
	{0x7E32, L"(�Q)"},
	{0x7E33, L"(�R)"},
	{0x7E34, L"(�S)"},
	{0x7E35, L"(�T)"},
	{0x7E36, L"(�U)"},
	{0x7E37, L"(�V)"},
	{0x7E38, L"(�W)"},
	{0x7E39, L"(�X)"},
	{0x7E3A, L"(10)"},
	{0x7E3B, L"(11)"},
	{0x7E3C, L"(12)"},
	{0x7E3D, L"(21)"},
	{0x7E3E, L"(22)"},
	{0x7E3F, L"(23)"},
	{0x7E40, L"(24)"},//94��32�_
	{0x7E41, L"(�`)"},
	{0x7E42, L"(�a)"},
	{0x7E43, L"(�b)"},
	{0x7E44, L"(�c)"},
	{0x7E45, L"(�d)"},
	{0x7E46, L"(�e)"},
	{0x7E47, L"(�f)"},
	{0x7E48, L"(�g)"},
	{0x7E49, L"(�h)"},
	{0x7E4A, L"(�i)"},
	{0x7E4B, L"(�j)"},
	{0x7E4C, L"(�k)"},
	{0x7E4D, L"(�l)"},
	{0x7E4E, L"(�m)"},
	{0x7E4F, L"(�n)"},
	{0x7E50, L"(�o)"},//94��48�_
	{0x7E51, L"(�p)"},
	{0x7E52, L"(�q)"},
	{0x7E53, L"(�r)"},
	{0x7E54, L"(�s)"},
	{0x7E55, L"(�t)"},
	{0x7E56, L"(�u)"},
	{0x7E57, L"(�v)"},
	{0x7E58, L"(�w)"},
	{0x7E59, L"(�x)"},
	{0x7E5A, L"(�y)"},
	{0x7E5B, L"(25)"},
	{0x7E5C, L"(26)"},
	{0x7E5D, L"(27)"},
	{0x7E5E, L"(28)"},
	{0x7E5F, L"(29)"},
	{0x7E60, L"(30)"},//94��64�_
	{0x7E61, L"�@"},
	{0x7E62, L"�A"},
	{0x7E63, L"�B"},
	{0x7E64, L"�C"},
	{0x7E65, L"�D"},
	{0x7E66, L"�E"},
	{0x7E67, L"�F"},
	{0x7E68, L"�G"},
	{0x7E69, L"�H"},
	{0x7E6A, L"�I"},
	{0x7E6B, L"�J"},
	{0x7E6C, L"�K"},
	{0x7E6D, L"�L"},
	{0x7E6E, L"�M"},
	{0x7E6F, L"�N"},
	{0x7E70, L"�O"},//94��80�_
	{0x7E71, L"(�P)"},
	{0x7E72, L"(�Q)"},
	{0x7E73, L"(�R)"},
	{0x7E74, L"(�S)"},
	{0x7E75, L"(�T)"},
	{0x7E76, L"(�U)"},
	{0x7E77, L"(�V)"},
	{0x7E78, L"(�W)"},
	{0x7E79, L"(�X)"},
	{0x7E7A, L"(10)"},
	{0x7E7B, L"(11)"},
	{0x7E7C, L"(12)"},
	{0x7E7D, L"(31)"}
};

static const GAIJI_TABLE GaijiTbl2[]={
	{0x7521, L"��"},
	{0x7522, L"��"},
	{0x7523, L"��"},
	{0x7524, L"�f"},
	{0x7525, L"�q"},
	{0x7526, L"�a"},
	{0x7527, L"�s"},
	{0x7528, L"��"},
	{0x7529, L"��"},
	{0x752A, L"��"}, //10
	{0x752B, L"��"},
	{0x752C, L"��"},
	{0x752D, L"��"},
	{0x752E, L"��"},
	{0x752F, L"�g"},
	{0x7530, L"��"},
	{0x7531, L"��"},
	{0x7532, L"��"},
	{0x7533, L"��"},
	{0x7534, L"��"}, //20
	{0x7535, L"��"},
	{0x7536, L"��"},
	{0x7537, L"��"},
	{0x7538, L"��"},
	{0x7539, L"��"},
	{0x753A, L"��"},
	{0x753B, L"��"},
	{0x753C, L"��"},
	{0x753D, L"��"},
	{0x753E, L"��"}, //30
	{0x753F, L"��"},
	{0x7540, L"��"},
	{0x7541, L"��"},
	{0x7542, L"��"},
	{0x7543, L"��"},
	{0x7544, L"�g"},
	{0x7545, L"��"},
	{0x7546, L"��"},
	{0x7547, L"�b"},
	{0x7548, L"��"}, //40
	{0x7549, L"��"},
	{0x754A, L"��"},
	{0x754B, L"��"},
	{0x754C, L"��"},
	{0x754D, L"�f"},
	{0x754E, L"��"},
	{0x754F, L"��"},
	{0x7550, L"��"},
	{0x7551, L"��"},
	{0x7552, L"��"}, //50
	{0x7553, L"��"},
	{0x7554, L"��"},
	{0x7555, L"��"},
	{0x7556, L"��"},
	{0x7557, L"��"},
	{0x7558, L"��"},
	{0x7559, L"��"},
	{0x755A, L"��"},
	{0x755B, L"�C"},
	{0x755C, L"��"}, //60
	{0x755D, L"��"},
	{0x755E, L"�C"},
	{0x755F, L"��"},
	{0x7560, L"��"},
	{0x7561, L"��"},
	{0x7562, L"��"},
	{0x7563, L"��"},
	{0x7564, L"��"},
	{0x7565, L"�W"},
	{0x7566, L"�Y"}, //70
	{0x7567, L"��"},
	{0x7568, L"��"},
	{0x7569, L"��"},
	{0x756A, L"�a"},
	{0x756B, L"�b"},
	{0x756C, L"��"},
	{0x756D, L"��"},
	{0x756E, L"��"},
	{0x756F, L"�g"},
	{0x7570, L"�h"}, //80
	{0x7571, L"��"},
	{0x7572, L"��"},
	{0x7573, L"��"},
	{0x7574, L"��"},
	{0x7575, L"�`"},
	{0x7576, L"��"},
	{0x7577, L"��"},
	{0x7578, L"��"},
	{0x7579, L"��"},
	{0x757A, L"��"}, //90
	{0x757B, L"�_"},
	{0x757C, L"�X"},
	{0x757D, L"��"},
	{0x757E, L"��"},
	{0x7621, L"��"},
	{0x7622, L"��"},
	{0x7623, L"��"},
	{0x7624, L"��"},
	{0x7625, L"��"},
	{0x7626, L"��"}, //100
	{0x7627, L"��"},
	{0x7628, L"��"},
	{0x7629, L"��"},
	{0x762A, L"��"},
	{0x762B, L"��"},
	{0x762C, L"��"},
	{0x762D, L"��"},
	{0x762E, L"�`"},
	{0x762F, L"�H"},
	{0x7630, L"��"}, //110
	{0x7631, L"��"},
	{0x7632, L"�I"},
	{0x7633, L"��"},
	{0x7634, L"��"},
	{0x7635, L"��"},
	{0x7636, L"�p"},
	{0x7637, L"��"},
	{0x7638, L"��"},
	{0x7639, L"��"},
	{0x763A, L"��"}, //120
	{0x763B, L"��"},
	{0x763C, L"��"},
	{0x763D, L"�A"},
	{0x763E, L"��"},
	{0x763F, L"��"},
	{0x7640, L"�_"},
	{0x7641, L"��"},
	{0x7642, L"�^"},
	{0x7643, L"��"},
	{0x7644, L"��"}, //130
	{0x7645, L"�L"},
	{0x7646, L"��"},
	{0x7647, L"��"},
	{0x7648, L"�I"},
	{0x7649, L"��"},
	{0x764A, L"��"},
	{0x764B, L"��"}
};

static BYTE DefaultMacro0[]={
	0x1B,0x24,0x39,0x1B,0x29,0x4A,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro1[]={
	0x1B,0x24,0x39,0x1B,0x29,0x31,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro2[]={
	0x1B,0x24,0x39,0x1B,0x29,0x20,0x41,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro3[]={
	0x1B,0x28,0x32,0x1B,0x29,0x34,0x1B,0x2A,0x35,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro4[]={
	0x1B,0x28,0x32,0x1B,0x29,0x33,0x1B,0x2A,0x35,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro5[]={
	0x1B,0x28,0x32,0x1B,0x29,0x20,0x41,0x1B,0x2A,0x35,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro6[]={
	0x1B,0x28,0x20,0x41,0x1B,0x29,0x20,0x42,0x1B,0x2A,0x20,0x43,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro7[]={
	0x1B,0x28,0x20,0x44,0x1B,0x29,0x20,0x45,0x1B,0x2A,0x20,0x46,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro8[]={
	0x1B,0x28,0x20,0x47,0x1B,0x29,0x20,0x48,0x1B,0x2A,0x20,0x49,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacro9[]={
	0x1B,0x28,0x20,0x4A,0x1B,0x29,0x20,0x4B,0x1B,0x2A,0x20,0x4C,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroA[]={
	0x1B,0x28,0x20,0x4D,0x1B,0x29,0x20,0x4E,0x1B,0x2A,0x20,0x4F,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroB[]={
	0x1B,0x24,0x39,0x1B,0x29,0x20,0x42,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroC[]={
	0x1B,0x24,0x39,0x1B,0x29,0x20,0x43,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroD[]={
	0x1B,0x24,0x39,0x1B,0x29,0x20,0x44,0x1B,0x2A,0x30,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroE[]={
	0x1B,0x28,0x31,0x1B,0x29,0x30,0x1B,0x2A,0x4A,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};
static BYTE DefaultMacroF[]={
	0x1B,0x28,0x4A,0x1B,0x29,0x32,0x1B,0x2A,0x20,0x41,0x1B,0x2B,0x20,0x70,0x0F,0x1B,0x7D
};

#endif //ARIB8CHAR_DECODE_H_IMPLEMENT_TABLE

//�����T�C�Y
typedef enum{
	STR_SMALL = 0, //SSZ
	STR_MEDIUM, //MSZ
	STR_NORMAL, //NSZ
	STR_MICRO, //SZX 0x60
	STR_HIGH_W, //SZX 0x41
	STR_WIDTH_W, //SZX 0x44
	STR_W, //SZX 0x45
	STR_SPECIAL_1, //SZX 0x6B
	STR_SPECIAL_2, //SZX 0x64
} STRING_SIZE;

struct CAPTION_CHAR_DATA{
	wstring strDecode;
	STRING_SIZE emCharSizeMode;

	CLUT_DAT stCharColor;
	CLUT_DAT stBackColor;
	CLUT_DAT stRasterColor;

	BOOL bUnderLine;
	BOOL bShadow;
	BOOL bBold;
	BOOL bItalic;
	BYTE bFlushMode;

	WORD wCharW;
	WORD wCharH;
	WORD wCharHInterval;
	WORD wCharVInterval;
};

struct CAPTION_DATA{
	BOOL bClear;
	WORD wSWFMode;
	WORD wClientX;
	WORD wClientY;
	WORD wClientW;
	WORD wClientH;
	WORD wPosX;
	WORD wPosY;
	vector<CAPTION_CHAR_DATA> CharList;
	DWORD dwWaitTime;
};

class CARIB8CharDecode
{
public:
	CARIB8CharDecode(void);
	~CARIB8CharDecode(void);

	//PSI/SI��z�肵��wstring�ւ̕ϊ�
	BOOL PSISI( const BYTE* pbSrc, DWORD dwSrcSize, wstring* strDec );
	//������z�肵��wstring�ւ̕ϊ�
	BOOL Caption( const BYTE* pbSrc, DWORD dwSrcSize, vector<CAPTION_DATA>* pCaptionList );

protected:
	struct MF_MODE{
		int iMF; //���������W��
		int iMode; //�����W���̕���
		int iByte; //�ǂݍ��݃o�C�g��
	};

	BOOL m_bPSI;

	MF_MODE m_G0;
	MF_MODE m_G1;
	MF_MODE m_G2;
	MF_MODE m_G3;
	MF_MODE* m_GL;
	MF_MODE* m_GR;

	//�f�R�[�h����������
	wstring m_strDecode;
	//�����T�C�Y
	STRING_SIZE m_emStrSize;

	//CLUT�̃C���f�b�N�X
	BYTE m_bCharColorIndex;
	BYTE m_bBackColorIndex;
	BYTE m_bRasterColorIndex;
	BYTE m_bDefPalette;

	BOOL m_bUnderLine;
	BOOL m_bShadow;
	BOOL m_bBold;
	BOOL m_bItalic;
	BYTE m_bFlushMode;

	//�\������
	WORD m_wSWFMode;
	WORD m_wClientX;
	WORD m_wClientY;
	WORD m_wClientW;
	WORD m_wClientH;
	WORD m_wPosX;
	WORD m_wPosY;
	WORD m_wCharW;
	WORD m_wCharH;
	WORD m_wCharHInterval;
	WORD m_wCharVInterval;
	WORD m_wMaxChar;

	DWORD m_dwWaitTime;

	vector<CAPTION_DATA>* m_pCaptionList;
protected:
	void InitPSISI(void);
	void InitCaption(void);
	BOOL Analyze( const BYTE* pbSrc, DWORD dwSrcSize, DWORD* pdwReadSize );

	BOOL IsSmallCharMode(void);
	BOOL IsChgPos(void);
	void CreateCaptionData(CAPTION_DATA* pItem);
	void CreateCaptionCharData(CAPTION_CHAR_DATA* pItem);
	void CheckModify(void);

	//���䕄��
	BOOL C0( const BYTE* pbSrc, DWORD* pdwReadSize );
	BOOL C1( const BYTE* pbSrc, DWORD* pdwReadSize );
	BOOL GL( const BYTE* pbSrc, DWORD* pdwReadSize );
	BOOL GR( const BYTE* pbSrc, DWORD* pdwReadSize );
	//�V���O���V�t�g
	BOOL SS2( const BYTE* pbSrc, DWORD* pdwReadSize );
	BOOL SS3( const BYTE* pbSrc, DWORD* pdwReadSize );
	//�G�X�P�[�v�V�[�P���X
	BOOL ESC( const BYTE* pbSrc, DWORD* pdwReadSize );
	//�Q�o�C�g�����ϊ�
	BOOL ToSJIS( const BYTE bFirst, const BYTE bSecond );
	BOOL ToCustomFont( const BYTE bFirst, const BYTE bSecond );

	BOOL CSI( const BYTE* pbSrc, DWORD* pdwReadSize );

};
