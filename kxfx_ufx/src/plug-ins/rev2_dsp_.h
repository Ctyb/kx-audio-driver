
#ifndef _NO_STATICS

const char* const rev2_name		= "Reverb R";
const char* const rev2_copyright= UCOPYRIGHT;
const char* const rev2_engine	= "";
const char* const rev2_created	= "Oct 30 2002";
const char* const rev2_comment	= "v1.2 beta; $nobypass";
const char* const rev2_guid		= "80100009-0ADF-11D6-BFBC-D4F706E10C52";

const int rev2_itramsize	= 0x00b7e; // 61.29 ms (2942 samples)
const int rev2_xtramsize	= 0x0f480; // 1304 ms (62592 samples)

#define R(i)
#define _	0xFFFF,
const dsp_register_info rev2_info[] =
{
R(0)	{"L", 			0x4000u, 0x07, _ 0x00000000},	// input
R(1)	{"R", 			0x4001u, 0x07, _ 0x00000000},	// input
R(2)	{"L", 			0x8000u, 0x08, _ 0x00000000},	// output
R(3)	{"R", 			0x8001u, 0x08, _ 0x00000000},	// output
R(4)	{"sL", 			0x8002u, 0x08, _ 0x00000000},	// output
R(5)	{"sR", 			0x8003u, 0x08, _ 0x00000000},	// output
R(6)	{"decay", 		0x8004u, 0x01, _ 0x00000000},	// static
R(7)	{"dfsn", 		0x8005u, 0x01, _ 0x5FFFFFFF},	// static, 0.75
R(8)	{"elev", 		0x8006u, 0x01, _ 0x00000000},	// static
R(9)	{"revlev", 		0x8007u, 0x01, _ 0x7FFFFFFF},	// static, 1.0
R(10)	{"drymix", 		0x8008u, 0x01, _ 0x00000000},	// static
R(11)	{"l", 			0x8009u, 0x01, _ 0x00000000},	// static
R(12)	{"r", 			0x800Au, 0x01, _ 0x00000000},	// static
R(13)	{"revL", 		0x800Bu, 0x01, _ 0x00000000},	// static
R(14)	{"revR", 		0x800Cu, 0x01, _ 0x00000000},	// static
R(15)	{"revlFb", 		0x800Du, 0x01, _ 0x00000000},	// static
R(16)	{"revrFb", 		0x800Eu, 0x01, _ 0x00000000},	// static
R(17)	{"hideczL", 	0x800Fu, 0x01, _ 0x00000000},	// static
R(18)	{"hideczR", 	0x8010u, 0x01, _ 0x00000000},	// static
R(19)	{"hidecf", 		0x8011u, 0x01, _ 0x00000000},	// static
R(20)	{"hideck", 		0x8012u, 0x01, _ 0x00000000},	// static
R(21)	{"hicutrevzL", 	0x8013u, 0x01, _ 0x00000000},	// static
R(22)	{"hicutrevzR", 	0x8014u, 0x01, _ 0x00000000},	// static
R(23)	{"hicutrevf", 	0x8015u, 0x01, _ 0x00000000},	// static
R(24)	{"hicutrevk", 	0x8016u, 0x01, _ 0x00000000},	// static
R(25)	{"hicutezL", 	0x8017u, 0x01, _ 0x00000000},	// static
R(26)	{"hicutezR", 	0x8018u, 0x01, _ 0x00000000},	// static
R(27)	{"hicutef", 	0x8019u, 0x01, _ 0x00000000},	// static
R(28)	{"locutzL", 	0x801Au, 0x01, _ 0x00000000},	// static
R(29)	{"locutzR", 	0x801Bu, 0x01, _ 0x00000000},	// static
R(30)	{"locutf", 		0x801Cu, 0x01, _ 0x00000000},	// static
R(31)	{"cp0", 		0x801Du, 0x01, _ 0x00000000},	// static
R(32)	{"cp1", 		0x801Eu, 0x01, _ 0x00000000},	// static
R(33)	{"cp2", 		0x801Fu, 0x01, _ 0x00000000},	// static
R(34)	{"cp3", 		0x8020u, 0x01, _ 0x00000000},	// static
R(35)	{"_AC33333332", 0x8021u, 0x01, _ 0x33333332},	// const, 0.4
R(36)	{"_AC19999999", 0x8022u, 0x01, _ 0x19999999},	// const, 0.2
R(37)	{"t0", 			0x8023u, 0x03, _ 0x00000000},	// temp
R(38)	{"t1", 			0x8024u, 0x03, _ 0x00000000},	// temp
R(39)	{"t2", 			0x8025u, 0x03, _ 0x00000000},	// temp
R(40)	{"t3", 			0x8026u, 0x03, _ 0x00000000},	// temp
R(41)	{"t4", 			0x8027u, 0x03, _ 0x00000000},	// temp
R(42)	{"dEAlw", 		0x8028u, 0x49, _ 0x00000000},
R(43)	{"&dEAlw", 		0x8029u, 0x0B, _ 0x00000000},
R(44)	{"dEAlr0", 		0x802Au, 0x29, _ 0x0000007A},
R(45)	{"&dEAlr0", 	0x802Bu, 0x0B, _ 0x0000007A},
R(46)	{"dEArw", 		0x802Cu, 0x49, _ 0x000000A2},
R(47)	{"&dEArw", 		0x802Du, 0x0B, _ 0x000000A2},
R(48)	{"dEArr0", 		0x802Eu, 0x29, _ 0x00000123},
R(49)	{"&dEArr0", 	0x802Fu, 0x0B, _ 0x00000123},
R(50)	{"dElw", 		0x8030u, 0x49, _ 0x0000014E},
R(51)	{"&dElw", 		0x8031u, 0x0B, _ 0x0000014E},
R(52)	{"dElr0", 		0x8032u, 0x29, _ 0x0000031E},
R(53)	{"&dElr0", 		0x8033u, 0x0B, _ 0x0000031E},
R(54)	{"dElr1", 		0x8034u, 0x29, _ 0x000004F5},
R(55)	{"&dElr1", 		0x8035u, 0x0B, _ 0x000004F5},
R(56)	{"dElr2", 		0x8036u, 0x29, _ 0x000004F6},
R(57)	{"&dElr2", 		0x8037u, 0x0B, _ 0x000004F6},
R(58)	{"dElr3", 		0x8038u, 0x29, _ 0x00000543},
R(59)	{"&dElr3", 		0x8039u, 0x0B, _ 0x00000543},
R(60)	{"dElr4", 		0x803Au, 0x29, _ 0x0000061A},
R(61)	{"&dElr4", 		0x803Bu, 0x0B, _ 0x0000061A},
R(62)	{"dErw", 		0x803Cu, 0x49, _ 0x0000061B},
R(63)	{"&dErw", 		0x803Du, 0x0B, _ 0x0000061B},
R(64)	{"dErr0", 		0x803Eu, 0x29, _ 0x000007D6},
R(65)	{"&dErr0", 		0x803Fu, 0x0B, _ 0x000007D6},
R(66)	{"dErr1", 		0x8040u, 0x29, _ 0x000009E1},
R(67)	{"&dErr1", 		0x8041u, 0x0B, _ 0x000009E1},
R(68)	{"dErr2", 		0x8042u, 0x29, _ 0x000009E2},
R(69)	{"&dErr2", 		0x8043u, 0x0B, _ 0x000009E2},
R(70)	{"dErr3", 		0x8044u, 0x29, _ 0x00000AAD},
R(71)	{"&dErr3", 		0x8045u, 0x0B, _ 0x00000AAD},
R(72)	{"dErr4", 		0x8046u, 0x29, _ 0x00000ADC},
R(73)	{"&dErr4", 		0x8047u, 0x0B, _ 0x00000ADC},
R(74)	{"dESlw", 		0x8048u, 0x49, _ 0x00000ADD},
R(75)	{"&dESlw", 		0x8049u, 0x0B, _ 0x00000ADD},
R(76)	{"dESlr0", 		0x804Au, 0x29, _ 0x00000B2C},
R(77)	{"&dESlr0", 	0x804Bu, 0x0B, _ 0x00000B2C},
R(78)	{"dESrw", 		0x804Cu, 0x49, _ 0x00000B2E},
R(79)	{"&dESrw", 		0x804Du, 0x0B, _ 0x00000B2E},
R(80)	{"dESrr0", 		0x804Eu, 0x29, _ 0x00000B7D},
R(81)	{"&dESrr0", 	0x804Fu, 0x0B, _ 0x00000B7D},
R(82)	{"dA1lw", 		0x8050u, 0x4A, _ 0x00000000},
R(83)	{"&dA1lw", 		0x8051u, 0x0B, _ 0x00000000},
R(84)	{"dA1lr0", 		0x8052u, 0x2A, _ 0x0000054E},
R(85)	{"&dA1lr0", 	0x8053u, 0x0B, _ 0x0000054E},
R(86)	{"dA2lw", 		0x8054u, 0x4A, _ 0x0000054F},
R(87)	{"&dA2lw", 		0x8055u, 0x0B, _ 0x0000054F},
R(88)	{"dA2lr0", 		0x8056u, 0x2A, _ 0x00000B97},
R(89)	{"&dA2lr0", 	0x8057u, 0x0B, _ 0x00000B97},
R(90)	{"dA3lw", 		0x8058u, 0x4A, _ 0x00000B98},
R(91)	{"&dA3lw", 		0x8059u, 0x0B, _ 0x00000B98},
R(92)	{"dA3lr0", 		0x805Au, 0x2A, _ 0x0000107B},
R(93)	{"&dA3lr0", 	0x805Bu, 0x0B, _ 0x0000107B},
R(94)	{"dA4lw", 		0x805Cu, 0x4A, _ 0x0000107C},
R(95)	{"&dA4lw", 		0x805Du, 0x0B, _ 0x0000107C},
R(96)	{"dA4lr0", 		0x805Eu, 0x2A, _ 0x00001BDA},
R(97)	{"&dA4lr0", 	0x805Fu, 0x0B, _ 0x00001BDA},
R(98)	{"dA5lw", 		0x8060u, 0x4A, _ 0x00001BDB},
R(99)	{"&dA5lw", 		0x8061u, 0x0B, _ 0x00001BDB},
R(100)	{"dA5lr0", 		0x8062u, 0x2A, _ 0x00002BFE},
R(101)	{"&dA5lr0", 	0x8063u, 0x0B, _ 0x00002BFE},
R(102)	{"dA6lw", 		0x8064u, 0x4A, _ 0x00002BFF},
R(103)	{"&dA6lw", 		0x8065u, 0x0B, _ 0x00002BFF},
R(104)	{"dA6lr0", 		0x8066u, 0x2A, _ 0x0000388E},
R(105)	{"&dA6lr0", 	0x8067u, 0x0B, _ 0x0000388E},
R(106)	{"dA1rw", 		0x8068u, 0x4A, _ 0x00003890},
R(107)	{"&dA1rw", 		0x8069u, 0x0B, _ 0x00003890},
R(108)	{"dA1rr0", 		0x806Au, 0x2A, _ 0x00003D6A},
R(109)	{"&dA1rr0", 	0x806Bu, 0x0B, _ 0x00003D6A},
R(110)	{"dA2rw", 		0x806Cu, 0x4A, _ 0x00003D6B},
R(111)	{"&dA2rw", 		0x806Du, 0x0B, _ 0x00003D6B},
R(112)	{"dA2rr0", 		0x806Eu, 0x2A, _ 0x00004538},
R(113)	{"&dA2rr0", 	0x806Fu, 0x0B, _ 0x00004538},
R(114)	{"dA3rw", 		0x8070u, 0x4A, _ 0x00004539},
R(115)	{"&dA3rw", 		0x8071u, 0x0B, _ 0x00004539},
R(116)	{"dA3rr0", 		0x8072u, 0x2A, _ 0x00004E8B},
R(117)	{"&dA3rr0", 	0x8073u, 0x0B, _ 0x00004E8B},
R(118)	{"dA4rw", 		0x8074u, 0x4A, _ 0x00004E8C},
R(119)	{"&dA4rw", 		0x8075u, 0x0B, _ 0x00004E8C},
R(120)	{"dA4rr0", 		0x8076u, 0x2A, _ 0x000057C7},
R(121)	{"&dA4rr0", 	0x8077u, 0x0B, _ 0x000057C7},
R(122)	{"dA5rw", 		0x8078u, 0x4A, _ 0x000057C8},
R(123)	{"&dA5rw", 		0x8079u, 0x0B, _ 0x000057C8},
R(124)	{"dA5rr0", 		0x807Au, 0x2A, _ 0x00006385},
R(125)	{"&dA5rr0", 	0x807Bu, 0x0B, _ 0x00006385},
R(126)	{"dA6rw", 		0x807Cu, 0x4A, _ 0x00006386},
R(127)	{"&dA6rw", 		0x807Du, 0x0B, _ 0x00006386},
R(128)	{"dA6rr0", 		0x807Eu, 0x2A, _ 0x0000711E},
R(129)	{"&dA6rr0", 	0x807Fu, 0x0B, _ 0x0000711E},
R(130)	{"dPl", 		0x8080u, 0x4A, _ 0x00007120},
R(131)	{"&dPl", 		0x8081u, 0x0B, _ 0x00007120},
R(132)	{"dPl_", 		0x8082u, 0x2A, _ 0x000075D0},
R(133)	{"&dPl_", 		0x8083u, 0x0B, _ 0x000075D0},
R(134)	{"dPr", 		0x8084u, 0x4A, _ 0x0000B2D0},
R(135)	{"&dPr", 		0x8085u, 0x0B, _ 0x0000B2D0},
R(136)	{"dPr_", 		0x8086u, 0x2A, _ 0x0000B780},
R(137)	{"&dPr_", 		0x8087u, 0x0B, _ 0x0000B780},
};
#undef _
#undef R

#define I(i)
const dsp_code rev2_code[] =
{
I(0)	{0x0, 0x8009u, 0x2040u, 0x4000u, 0x204Fu},	// macs,
I(1)	{0x0, 0x800Au, 0x2040u, 0x4001u, 0x204Fu},	// macs,
I(2)	{0xE, 0x8013u, 0x8009u, 0x8015u, 0x8013u},	// interp,
I(3)	{0xE, 0x801Au, 0x8009u, 0x801Cu, 0x801Au},	// interp,
I(4)	{0x1, 0x8030u, 0x8009u, 0x2040u, 0x801Au},	// macsn,
I(5)	{0x0, 0x8023u, 0x2040u, 0x8032u, 0x204Du},	// macs,
I(6)	{0x1, 0x8023u, 0x8023u, 0x8034u, 0x204Cu},	// macsn,
I(7)	{0x1, 0x8023u, 0x8023u, 0x8036u, 0x204Cu},	// macsn,
I(8)	{0x0, 0x8023u, 0x8023u, 0x8038u, 0x204Bu},	// macs,
I(9)	{0x1, 0x8023u, 0x8023u, 0x803Au, 0x204Bu},	// macsn,
I(10)	{0x0, 0x8026u, 0x802Au, 0x8023u, 0x2054u},	// macs,
I(11)	{0x1, 0x8028u, 0x8023u, 0x8026u, 0x2054u},	// macsn,
I(12)	{0xE, 0x8017u, 0x8026u, 0x8019u, 0x8017u},	// interp,
I(13)	{0xE, 0x8026u, 0x8017u, 0x204Fu, 0x8026u},	// interp,
I(14)	{0xE, 0x8048u, 0x8026u, 0x204Du, 0x8017u},	// interp,
I(15)	{0x1, 0x8026u, 0x8026u, 0x804Eu, 0x204Fu},	// macsn,
I(16)	{0xE, 0x8024u, 0x8009u, 0x8016u, 0x8013u},	// interp,
I(17)	{0x1, 0x8080u, 0x8024u, 0x2040u, 0x801Au},	// macsn,
I(18)	{0x0, 0x8024u, 0x8082u, 0x800Eu, 0x8004u},	// macs,
I(19)	{0x1, 0x8024u, 0x8024u, 0x800Du, 0x8004u},	// macsn,
I(20)	{0xE, 0x800Fu, 0x8024u, 0x8011u, 0x800Fu},	// interp,
I(21)	{0xE, 0x8024u, 0x8024u, 0x8012u, 0x800Fu},	// interp,
I(22)	{0x0, 0x8023u, 0x8052u, 0x8024u, 0x8005u},	// macs,
I(23)	{0x1, 0x8050u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(24)	{0x0, 0x800Bu, 0x2040u, 0x8023u, 0x2040u},	// macs,
I(25)	{0x0, 0x8024u, 0x8056u, 0x8023u, 0x8005u},	// macs,
I(26)	{0x1, 0x8054u, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(27)	{0x0, 0x800Bu, 0x800Bu, 0x8024u, 0x2040u},	// macs,
I(28)	{0x0, 0x8023u, 0x805Au, 0x8024u, 0x8005u},	// macs,
I(29)	{0x1, 0x8058u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(30)	{0x0, 0x800Bu, 0x800Bu, 0x8023u, 0x2040u},	// macs,
I(31)	{0x0, 0x8024u, 0x805Eu, 0x8023u, 0x8005u},	// macs,
I(32)	{0x1, 0x805Cu, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(33)	{0x0, 0x800Cu, 0x2040u, 0x8024u, 0x2040u},	// macs,
I(34)	{0x0, 0x8023u, 0x8062u, 0x8024u, 0x8005u},	// macs,
I(35)	{0x1, 0x8060u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(36)	{0x0, 0x800Bu, 0x800Bu, 0x8023u, 0x2040u},	// macs,
I(37)	{0x0, 0x800Cu, 0x800Cu, 0x8023u, 0x2040u},	// macs,
I(38)	{0x0, 0x8024u, 0x8066u, 0x8023u, 0x8005u},	// macs,
I(39)	{0x1, 0x8064u, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(40)	{0x0, 0x800Bu, 0x800Bu, 0x8024u, 0x2040u},	// macs,
I(41)	{0xE, 0x800Du, 0x8024u, 0x800Du, 0x8004u},	// interp,
I(42)	{0xE, 0x8014u, 0x800Au, 0x8015u, 0x8014u},	// interp,
I(43)	{0xE, 0x801Bu, 0x800Au, 0x801Cu, 0x801Bu},	// interp,
I(44)	{0x1, 0x803Cu, 0x800Au, 0x2040u, 0x801Bu},	// macsn,
I(45)	{0x0, 0x8023u, 0x2040u, 0x803Eu, 0x8021u},	// macs,
I(46)	{0x0, 0x8023u, 0x8023u, 0x8040u, 0x204Cu},	// macs,
I(47)	{0x0, 0x8023u, 0x8023u, 0x8042u, 0x204Cu},	// macs,
I(48)	{0x1, 0x8023u, 0x8023u, 0x8044u, 0x8022u},	// macsn,
I(49)	{0x0, 0x8023u, 0x8023u, 0x8046u, 0x8022u},	// macs,
I(50)	{0x0, 0x8027u, 0x802Eu, 0x8023u, 0x2054u},	// macs,
I(51)	{0x1, 0x802Cu, 0x8023u, 0x8027u, 0x2054u},	// macsn,
I(52)	{0xE, 0x8018u, 0x8027u, 0x8019u, 0x8018u},	// interp,
I(53)	{0xE, 0x8027u, 0x8018u, 0x204Fu, 0x8027u},	// interp,
I(54)	{0xE, 0x804Cu, 0x8027u, 0x204Du, 0x8018u},	// interp,
I(55)	{0x1, 0x8027u, 0x8027u, 0x804Au, 0x204Fu},	// macsn,
I(56)	{0xE, 0x8024u, 0x800Au, 0x8016u, 0x8014u},	// interp,
I(57)	{0x1, 0x8084u, 0x8024u, 0x2040u, 0x801Bu},	// macsn,
I(58)	{0x1, 0x8024u, 0x8086u, 0x800Du, 0x8004u},	// macsn,
I(59)	{0x1, 0x8024u, 0x8024u, 0x800Eu, 0x8004u},	// macsn,
I(60)	{0xE, 0x8010u, 0x8024u, 0x8011u, 0x8010u},	// interp,
I(61)	{0xE, 0x8024u, 0x8024u, 0x8012u, 0x8010u},	// interp,
I(62)	{0x0, 0x8023u, 0x806Au, 0x8024u, 0x8005u},	// macs,
I(63)	{0x1, 0x8068u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(64)	{0x0, 0x800Cu, 0x800Cu, 0x8023u, 0x2040u},	// macs,
I(65)	{0x0, 0x8024u, 0x806Eu, 0x8023u, 0x8005u},	// macs,
I(66)	{0x1, 0x806Cu, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(67)	{0x0, 0x800Cu, 0x800Cu, 0x8024u, 0x2040u},	// macs,
I(68)	{0x0, 0x8023u, 0x8072u, 0x8024u, 0x8005u},	// macs,
I(69)	{0x1, 0x8070u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(70)	{0x0, 0x800Cu, 0x800Cu, 0x8023u, 0x2040u},	// macs,
I(71)	{0x0, 0x8024u, 0x8076u, 0x8023u, 0x8005u},	// macs,
I(72)	{0x1, 0x8074u, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(73)	{0x0, 0x800Bu, 0x800Bu, 0x8024u, 0x2040u},	// macs,
I(74)	{0x0, 0x8023u, 0x807Au, 0x8024u, 0x8005u},	// macs,
I(75)	{0x1, 0x8078u, 0x8024u, 0x8023u, 0x8005u},	// macsn,
I(76)	{0x0, 0x800Cu, 0x800Cu, 0x8023u, 0x2040u},	// macs,
I(77)	{0x0, 0x800Bu, 0x800Bu, 0x8023u, 0x2040u},	// macs,
I(78)	{0x0, 0x8024u, 0x807Eu, 0x8023u, 0x8005u},	// macs,
I(79)	{0x1, 0x807Cu, 0x8023u, 0x8024u, 0x8005u},	// macsn,
I(80)	{0x0, 0x800Cu, 0x800Cu, 0x8024u, 0x2040u},	// macs,
I(81)	{0x0, 0x800Eu, 0x8024u, 0x800Eu, 0x8004u},	// macs,
I(82)	{0xE, 0x8024u, 0x2040u, 0x800Bu, 0x8007u},	// interp,
I(83)	{0x0, 0x8025u, 0x2056u, 0x8026u, 0x8006u},	// macs,
I(84)	{0x0, 0x8000u, 0x2056u, 0x8009u, 0x8008u},	// macs,
I(85)	{0xE, 0x8002u, 0x8024u, 0x804Au, 0x8006u},	// interp,
I(86)	{0xE, 0x8024u, 0x2040u, 0x800Cu, 0x8007u},	// interp,
I(87)	{0x0, 0x8025u, 0x2056u, 0x8027u, 0x8006u},	// macs,
I(88)	{0x0, 0x8001u, 0x2056u, 0x800Au, 0x8008u},	// macs,
I(89)	{0xE, 0x8003u, 0x8024u, 0x804Eu, 0x8006u},	// interp,
};
#undef I

#endif

// register ids
#define R_INL		0x4000u
#define R_INR		0x4001u
#define R_OUTL		0x8000u
#define R_OUTR		0x8001u
#define R_ROUTL		0x8002u
#define R_ROUTR		0x8003u
#define R_DECAY		0x8004u
#define R_DFSN		0x8005u
#define R_ELEV		0x8006u
#define R_REVLEV		0x8007u
#define R_DRYMIX		0x8008u
#define R_L		0x8009u
#define R_R		0x800Au
#define R_REVL		0x800Bu
#define R_REVR		0x800Cu
#define R_REVLFB		0x800Du
#define R_REVRFB		0x800Eu
#define R_HIDECZL		0x800Fu
#define R_HIDECZR		0x8010u
#define R_HIDECF		0x8011u
#define R_HIDECK		0x8012u
#define R_HICUTREVZL		0x8013u
#define R_HICUTREVZR		0x8014u
#define R_HICUTREVF		0x8015u
#define R_HICUTREVK		0x8016u
#define R_HICUTEZL		0x8017u
#define R_HICUTEZR		0x8018u
#define R_HICUTEF		0x8019u
#define R_LOCUTZL		0x801Au
#define R_LOCUTZR		0x801Bu
#define R_LOCUTF		0x801Cu
#define R_CP0		0x801Du
#define R_CP1		0x801Eu
#define R_CP2		0x801Fu
#define R_CP3		0x8020u
#define R__AC33333332		0x8021u
#define R__AC19999999		0x8022u
#define R_T0		0x8023u
#define R_T1		0x8024u
#define R_T2		0x8025u
#define R_T3		0x8026u
#define R_T4		0x8027u
#define R_DEALW		0x8028u
#define R_DEALR0		0x802Au
#define R_DEARW		0x802Cu
#define R_DEARR0		0x802Eu
#define R_DELW		0x8030u
#define R_DELR0		0x8032u
#define R_DELR1		0x8034u
#define R_DELR2		0x8036u
#define R_DELR3		0x8038u
#define R_DELR4		0x803Au
#define R_DERW		0x803Cu
#define R_DERR0		0x803Eu
#define R_DERR1		0x8040u
#define R_DERR2		0x8042u
#define R_DERR3		0x8044u
#define R_DERR4		0x8046u
#define R_DESLW		0x8048u
#define R_DESLR0		0x804Au
#define R_DESRW		0x804Cu
#define R_DESRR0		0x804Eu
#define R_DA1LW		0x8050u
#define R_DA1LR0		0x8052u
#define R_DA2LW		0x8054u
#define R_DA2LR0		0x8056u
#define R_DA3LW		0x8058u
#define R_DA3LR0		0x805Au
#define R_DA4LW		0x805Cu
#define R_DA4LR0		0x805Eu
#define R_DA5LW		0x8060u
#define R_DA5LR0		0x8062u
#define R_DA6LW		0x8064u
#define R_DA6LR0		0x8066u
#define R_DA1RW		0x8068u
#define R_DA1RR0		0x806Au
#define R_DA2RW		0x806Cu
#define R_DA2RR0		0x806Eu
#define R_DA3RW		0x8070u
#define R_DA3RR0		0x8072u
#define R_DA4RW		0x8074u
#define R_DA4RR0		0x8076u
#define R_DA5RW		0x8078u
#define R_DA5RR0		0x807Au
#define R_DA6RW		0x807Cu
#define R_DA6RR0		0x807Eu
#define R_DPL		0x8080u
#define R_DPL_		0x8082u
#define R_DPR		0x8084u
#define R_DPR_		0x8086u
