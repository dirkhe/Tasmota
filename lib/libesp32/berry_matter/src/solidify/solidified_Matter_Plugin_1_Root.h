/* Solidification of Matter_Plugin_1_Root.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Root;

/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Root_read_attribute,   /* name */
  be_nested_proto(
    25,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[93]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(set),
    /* K7   */  be_nested_str_weak(U8),
    /* K8   */  be_nested_str_weak(_breadcrumb),
    /* K9   */  be_const_int(1),
    /* K10  */  be_nested_str_weak(Matter_TLV_struct),
    /* K11  */  be_nested_str_weak(add_TLV),
    /* K12  */  be_nested_str_weak(U2),
    /* K13  */  be_const_int(2),
    /* K14  */  be_nested_str_weak(U1),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str_weak(BOOL),
    /* K17  */  be_nested_str_weak(Matter_TLV_array),
    /* K18  */  be_nested_str_weak(tasmota),
    /* K19  */  be_nested_str_weak(eth),
    /* K20  */  be_nested_str_weak(up),
    /* K21  */  be_nested_str_weak(add_struct),
    /* K22  */  be_nested_str_weak(UTF1),
    /* K23  */  be_nested_str_weak(ethernet),
    /* K24  */  be_nested_str_weak(NULL),
    /* K25  */  be_nested_str_weak(fromhex),
    /* K26  */  be_nested_str_weak(replace),
    /* K27  */  be_nested_str_weak(find),
    /* K28  */  be_nested_str_weak(mac),
    /* K29  */  be_nested_str_weak(),
    /* K30  */  be_nested_str_weak(_X3A),
    /* K31  */  be_nested_str_weak(B1),
    /* K32  */  be_nested_str_weak(add_array),
    /* K33  */  be_nested_str_weak(get_ip_bytes),
    /* K34  */  be_nested_str_weak(ip),
    /* K35  */  be_nested_str_weak(ip6local),
    /* K36  */  be_nested_str_weak(ip6),
    /* K37  */  be_nested_str_weak(wifi),
    /* K38  */  be_nested_str_weak(cmd),
    /* K39  */  be_nested_str_weak(Status_X201),
    /* K40  */  be_nested_str_weak(StatusPRM),
    /* K41  */  be_nested_str_weak(BootCount),
    /* K42  */  be_nested_str_weak(U4),
    /* K43  */  be_nested_str_weak(Status_X2011),
    /* K44  */  be_nested_str_weak(StatusSTS),
    /* K45  */  be_nested_str_weak(UptimeSec),
    /* K46  */  be_nested_str_weak(int64),
    /* K47  */  be_nested_str_weak(rtc_utc),
    /* K48  */  be_const_int(1000000),
    /* K49  */  be_nested_str_weak(rtc),
    /* K50  */  be_nested_str_weak(local),
    /* K51  */  be_nested_str_weak(ack_request),
    /* K52  */  be_nested_str_weak(fabric_filtered),
    /* K53  */  be_nested_str_weak(get_fabric),
    /* K54  */  be_nested_str_weak(device),
    /* K55  */  be_nested_str_weak(sessions),
    /* K56  */  be_nested_str_weak(active_fabrics),
    /* K57  */  be_nested_str_weak(B2),
    /* K58  */  be_nested_str_weak(get_noc),
    /* K59  */  be_nested_str_weak(get_icac),
    /* K60  */  be_nested_str_weak(AGGREGATOR_ENDPOINT),
    /* K61  */  be_nested_str_weak(get_fabric_index),
    /* K62  */  be_nested_str_weak(stop_iteration),
    /* K63  */  be_nested_str_weak(parse),
    /* K64  */  be_nested_str_weak(get_ca),
    /* K65  */  be_nested_str_weak(findsubval),
    /* K66  */  be_nested_str_weak(get_admin_vendor),
    /* K67  */  be_nested_str_weak(get_fabric_id),
    /* K68  */  be_nested_str_weak(get_device_id),
    /* K69  */  be_nested_str_weak(get_fabric_label),
    /* K70  */  be_nested_str_weak(Fabric),
    /* K71  */  be_nested_str_weak(_MAX_CASE),
    /* K72  */  be_nested_str_weak(count_active_fabrics),
    /* K73  */  be_nested_str_weak(_fabric),
    /* K74  */  be_nested_str_weak(is_commissioning_open),
    /* K75  */  be_nested_str_weak(is_root_commissioning_open),
    /* K76  */  be_nested_str_weak(commissioning_admin_fabric),
    /* K77  */  be_nested_str_weak(Tasmota),
    /* K78  */  be_nested_str_weak(vendorid),
    /* K79  */  be_nested_str_weak(DeviceName),
    /* K80  */  be_nested_str_weak(FriendlyName),
    /* K81  */  be_nested_str_weak(FriendlyName1),
    /* K82  */  be_nested_str_weak(XX),
    /* K83  */  be_nested_str_weak(Status_X202),
    /* K84  */  be_nested_str_weak(StatusFWR),
    /* K85  */  be_nested_str_weak(Hardware),
    /* K86  */  be_nested_str_weak(Version),
    /* K87  */  be_nested_str_weak(_X28),
    /* K88  */  be_nested_str_weak(locale),
    /* K89  */  be_nested_str_weak(create_TLV),
    /* K90  */  be_nested_str_weak(get_active_endpoints),
    /* K91  */  be_nested_str_weak(disable_bridge_mode),
    /* K92  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[939]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0xB8160200,  //  0001  GETNGBL	R5	K1
      0x88140B02,  //  0002  GETMBR	R5	R5	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x881C0504,  //  0004  GETMBR	R7	R2	K4
      0x5422002F,  //  0005  LDINT	R8	48
      0x1C200C08,  //  0006  EQ	R8	R6	R8
      0x78220030,  //  0007  JMPF	R8	#0039
      0x1C200F05,  //  0008  EQ	R8	R7	K5
      0x78220005,  //  0009  JMPF	R8	#0010
      0x8C200706,  //  000A  GETMET	R8	R3	K6
      0x88280B07,  //  000B  GETMBR	R10	R5	K7
      0x882C0308,  //  000C  GETMBR	R11	R1	K8
      0x7C200600,  //  000D  CALL	R8	3
      0x80041000,  //  000E  RET	1	R8
      0x70020027,  //  000F  JMP		#0038
      0x1C200F09,  //  0010  EQ	R8	R7	K9
      0x7822000D,  //  0011  JMPF	R8	#0020
      0x8C200B0A,  //  0012  GETMET	R8	R5	K10
      0x7C200200,  //  0013  CALL	R8	1
      0x8C24110B,  //  0014  GETMET	R9	R8	K11
      0x582C0005,  //  0015  LDCONST	R11	K5
      0x88300B0C,  //  0016  GETMBR	R12	R5	K12
      0x5436003B,  //  0017  LDINT	R13	60
      0x7C240800,  //  0018  CALL	R9	4
      0x8C24110B,  //  0019  GETMET	R9	R8	K11
      0x582C0009,  //  001A  LDCONST	R11	K9
      0x88300B0C,  //  001B  GETMBR	R12	R5	K12
      0x54360383,  //  001C  LDINT	R13	900
      0x7C240800,  //  001D  CALL	R9	4
      0x80041000,  //  001E  RET	1	R8
      0x70020017,  //  001F  JMP		#0038
      0x1C200F0D,  //  0020  EQ	R8	R7	K13
      0x78220005,  //  0021  JMPF	R8	#0028
      0x8C200706,  //  0022  GETMET	R8	R3	K6
      0x88280B0E,  //  0023  GETMBR	R10	R5	K14
      0x582C000D,  //  0024  LDCONST	R11	K13
      0x7C200600,  //  0025  CALL	R8	3
      0x80041000,  //  0026  RET	1	R8
      0x7002000F,  //  0027  JMP		#0038
      0x1C200F0F,  //  0028  EQ	R8	R7	K15
      0x78220005,  //  0029  JMPF	R8	#0030
      0x8C200706,  //  002A  GETMET	R8	R3	K6
      0x88280B0E,  //  002B  GETMBR	R10	R5	K14
      0x582C000D,  //  002C  LDCONST	R11	K13
      0x7C200600,  //  002D  CALL	R8	3
      0x80041000,  //  002E  RET	1	R8
      0x70020007,  //  002F  JMP		#0038
      0x54220003,  //  0030  LDINT	R8	4
      0x1C200E08,  //  0031  EQ	R8	R7	R8
      0x78220004,  //  0032  JMPF	R8	#0038
      0x8C200706,  //  0033  GETMET	R8	R3	K6
      0x88280B10,  //  0034  GETMBR	R10	R5	K16
      0x502C0000,  //  0035  LDBOOL	R11	0	0
      0x7C200600,  //  0036  CALL	R8	3
      0x80041000,  //  0037  RET	1	R8
      0x70020370,  //  0038  JMP		#03AA
      0x54220031,  //  0039  LDINT	R8	50
      0x1C200C08,  //  003A  EQ	R8	R6	R8
      0x78220000,  //  003B  JMPF	R8	#003D
      0x7002036C,  //  003C  JMP		#03AA
      0x54220032,  //  003D  LDINT	R8	51
      0x1C200C08,  //  003E  EQ	R8	R6	R8
      0x782200DC,  //  003F  JMPF	R8	#011D
      0x1C200F05,  //  0040  EQ	R8	R7	K5
      0x782200B5,  //  0041  JMPF	R8	#00F8
      0x8C200B11,  //  0042  GETMET	R8	R5	K17
      0x7C200200,  //  0043  CALL	R8	1
      0xB8262400,  //  0044  GETNGBL	R9	K18
      0x8C241313,  //  0045  GETMET	R9	R9	K19
      0x7C240200,  //  0046  CALL	R9	1
      0x94281314,  //  0047  GETIDX	R10	R9	K20
      0x782A0053,  //  0048  JMPF	R10	#009D
      0x8C281115,  //  0049  GETMET	R10	R8	K21
      0x4C300000,  //  004A  LDNIL	R12
      0x7C280400,  //  004B  CALL	R10	2
      0x8C2C150B,  //  004C  GETMET	R11	R10	K11
      0x58340005,  //  004D  LDCONST	R13	K5
      0x88380B16,  //  004E  GETMBR	R14	R5	K22
      0x583C0017,  //  004F  LDCONST	R15	K23
      0x7C2C0800,  //  0050  CALL	R11	4
      0x8C2C150B,  //  0051  GETMET	R11	R10	K11
      0x58340009,  //  0052  LDCONST	R13	K9
      0x88380B10,  //  0053  GETMBR	R14	R5	K16
      0x583C0009,  //  0054  LDCONST	R15	K9
      0x7C2C0800,  //  0055  CALL	R11	4
      0x8C2C150B,  //  0056  GETMET	R11	R10	K11
      0x5834000D,  //  0057  LDCONST	R13	K13
      0x88380B10,  //  0058  GETMBR	R14	R5	K16
      0x583C0009,  //  0059  LDCONST	R15	K9
      0x7C2C0800,  //  005A  CALL	R11	4
      0x8C2C150B,  //  005B  GETMET	R11	R10	K11
      0x5834000F,  //  005C  LDCONST	R13	K15
      0x88380B18,  //  005D  GETMBR	R14	R5	K24
      0x4C3C0000,  //  005E  LDNIL	R15
      0x7C2C0800,  //  005F  CALL	R11	4
      0x602C0015,  //  0060  GETGBL	R11	G21
      0x7C2C0000,  //  0061  CALL	R11	0
      0x8C2C1719,  //  0062  GETMET	R11	R11	K25
      0x8C34091A,  //  0063  GETMET	R13	R4	K26
      0x8C3C131B,  //  0064  GETMET	R15	R9	K27
      0x5844001C,  //  0065  LDCONST	R17	K28
      0x5848001D,  //  0066  LDCONST	R18	K29
      0x7C3C0600,  //  0067  CALL	R15	3
      0x5840001E,  //  0068  LDCONST	R16	K30
      0x5844001D,  //  0069  LDCONST	R17	K29
      0x7C340800,  //  006A  CALL	R13	4
      0x7C2C0400,  //  006B  CALL	R11	2
      0x8C30150B,  //  006C  GETMET	R12	R10	K11
      0x543A0003,  //  006D  LDINT	R14	4
      0x883C0B1F,  //  006E  GETMBR	R15	R5	K31
      0x5C401600,  //  006F  MOVE	R16	R11
      0x7C300800,  //  0070  CALL	R12	4
      0x8C301520,  //  0071  GETMET	R12	R10	K32
      0x543A0004,  //  0072  LDINT	R14	5
      0x7C300400,  //  0073  CALL	R12	2
      0x8C34190B,  //  0074  GETMET	R13	R12	K11
      0x4C3C0000,  //  0075  LDNIL	R15
      0x88400B1F,  //  0076  GETMBR	R16	R5	K31
      0xB8460200,  //  0077  GETNGBL	R17	K1
      0x8C442321,  //  0078  GETMET	R17	R17	K33
      0x8C4C131B,  //  0079  GETMET	R19	R9	K27
      0x58540022,  //  007A  LDCONST	R21	K34
      0x5858001D,  //  007B  LDCONST	R22	K29
      0x7C4C0600,  //  007C  CALL	R19	3
      0x7C440400,  //  007D  CALL	R17	2
      0x7C340800,  //  007E  CALL	R13	4
      0x8C341520,  //  007F  GETMET	R13	R10	K32
      0x543E0005,  //  0080  LDINT	R15	6
      0x7C340400,  //  0081  CALL	R13	2
      0x8C381B0B,  //  0082  GETMET	R14	R13	K11
      0x4C400000,  //  0083  LDNIL	R16
      0x88440B1F,  //  0084  GETMBR	R17	R5	K31
      0xB84A0200,  //  0085  GETNGBL	R18	K1
      0x8C482521,  //  0086  GETMET	R18	R18	K33
      0x8C50131B,  //  0087  GETMET	R20	R9	K27
      0x58580023,  //  0088  LDCONST	R22	K35
      0x585C001D,  //  0089  LDCONST	R23	K29
      0x7C500600,  //  008A  CALL	R20	3
      0x7C480400,  //  008B  CALL	R18	2
      0x7C380800,  //  008C  CALL	R14	4
      0x8C381B0B,  //  008D  GETMET	R14	R13	K11
      0x4C400000,  //  008E  LDNIL	R16
      0x88440B1F,  //  008F  GETMBR	R17	R5	K31
      0xB84A0200,  //  0090  GETNGBL	R18	K1
      0x8C482521,  //  0091  GETMET	R18	R18	K33
      0x8C50131B,  //  0092  GETMET	R20	R9	K27
      0x58580024,  //  0093  LDCONST	R22	K36
      0x585C001D,  //  0094  LDCONST	R23	K29
      0x7C500600,  //  0095  CALL	R20	3
      0x7C480400,  //  0096  CALL	R18	2
      0x7C380800,  //  0097  CALL	R14	4
      0x8C38150B,  //  0098  GETMET	R14	R10	K11
      0x54420006,  //  0099  LDINT	R16	7
      0x88440B0E,  //  009A  GETMBR	R17	R5	K14
      0x5848000D,  //  009B  LDCONST	R18	K13
      0x7C380800,  //  009C  CALL	R14	4
      0xB82A2400,  //  009D  GETNGBL	R10	K18
      0x8C281525,  //  009E  GETMET	R10	R10	K37
      0x7C280200,  //  009F  CALL	R10	1
      0x942C1514,  //  00A0  GETIDX	R11	R10	K20
      0x782E0053,  //  00A1  JMPF	R11	#00F6
      0x8C2C1115,  //  00A2  GETMET	R11	R8	K21
      0x4C340000,  //  00A3  LDNIL	R13
      0x7C2C0400,  //  00A4  CALL	R11	2
      0x8C30170B,  //  00A5  GETMET	R12	R11	K11
      0x58380005,  //  00A6  LDCONST	R14	K5
      0x883C0B16,  //  00A7  GETMBR	R15	R5	K22
      0x58400025,  //  00A8  LDCONST	R16	K37
      0x7C300800,  //  00A9  CALL	R12	4
      0x8C30170B,  //  00AA  GETMET	R12	R11	K11
      0x58380009,  //  00AB  LDCONST	R14	K9
      0x883C0B10,  //  00AC  GETMBR	R15	R5	K16
      0x58400009,  //  00AD  LDCONST	R16	K9
      0x7C300800,  //  00AE  CALL	R12	4
      0x8C30170B,  //  00AF  GETMET	R12	R11	K11
      0x5838000D,  //  00B0  LDCONST	R14	K13
      0x883C0B10,  //  00B1  GETMBR	R15	R5	K16
      0x58400009,  //  00B2  LDCONST	R16	K9
      0x7C300800,  //  00B3  CALL	R12	4
      0x8C30170B,  //  00B4  GETMET	R12	R11	K11
      0x5838000F,  //  00B5  LDCONST	R14	K15
      0x883C0B18,  //  00B6  GETMBR	R15	R5	K24
      0x4C400000,  //  00B7  LDNIL	R16
      0x7C300800,  //  00B8  CALL	R12	4
      0x60300015,  //  00B9  GETGBL	R12	G21
      0x7C300000,  //  00BA  CALL	R12	0
      0x8C301919,  //  00BB  GETMET	R12	R12	K25
      0x8C38091A,  //  00BC  GETMET	R14	R4	K26
      0x8C40151B,  //  00BD  GETMET	R16	R10	K27
      0x5848001C,  //  00BE  LDCONST	R18	K28
      0x584C001D,  //  00BF  LDCONST	R19	K29
      0x7C400600,  //  00C0  CALL	R16	3
      0x5844001E,  //  00C1  LDCONST	R17	K30
      0x5848001D,  //  00C2  LDCONST	R18	K29
      0x7C380800,  //  00C3  CALL	R14	4
      0x7C300400,  //  00C4  CALL	R12	2
      0x8C34170B,  //  00C5  GETMET	R13	R11	K11
      0x543E0003,  //  00C6  LDINT	R15	4
      0x88400B1F,  //  00C7  GETMBR	R16	R5	K31
      0x5C441800,  //  00C8  MOVE	R17	R12
      0x7C340800,  //  00C9  CALL	R13	4
      0x8C341720,  //  00CA  GETMET	R13	R11	K32
      0x543E0004,  //  00CB  LDINT	R15	5
      0x7C340400,  //  00CC  CALL	R13	2
      0x8C381B0B,  //  00CD  GETMET	R14	R13	K11
      0x4C400000,  //  00CE  LDNIL	R16
      0x88440B1F,  //  00CF  GETMBR	R17	R5	K31
      0xB84A0200,  //  00D0  GETNGBL	R18	K1
      0x8C482521,  //  00D1  GETMET	R18	R18	K33
      0x8C50151B,  //  00D2  GETMET	R20	R10	K27
      0x58580022,  //  00D3  LDCONST	R22	K34
      0x585C001D,  //  00D4  LDCONST	R23	K29
      0x7C500600,  //  00D5  CALL	R20	3
      0x7C480400,  //  00D6  CALL	R18	2
      0x7C380800,  //  00D7  CALL	R14	4
      0x8C381720,  //  00D8  GETMET	R14	R11	K32
      0x54420005,  //  00D9  LDINT	R16	6
      0x7C380400,  //  00DA  CALL	R14	2
      0x8C3C1D0B,  //  00DB  GETMET	R15	R14	K11
      0x4C440000,  //  00DC  LDNIL	R17
      0x88480B1F,  //  00DD  GETMBR	R18	R5	K31
      0xB84E0200,  //  00DE  GETNGBL	R19	K1
      0x8C4C2721,  //  00DF  GETMET	R19	R19	K33
      0x8C54151B,  //  00E0  GETMET	R21	R10	K27
      0x585C0023,  //  00E1  LDCONST	R23	K35
      0x5860001D,  //  00E2  LDCONST	R24	K29
      0x7C540600,  //  00E3  CALL	R21	3
      0x7C4C0400,  //  00E4  CALL	R19	2
      0x7C3C0800,  //  00E5  CALL	R15	4
      0x8C3C1D0B,  //  00E6  GETMET	R15	R14	K11
      0x4C440000,  //  00E7  LDNIL	R17
      0x88480B1F,  //  00E8  GETMBR	R18	R5	K31
      0xB84E0200,  //  00E9  GETNGBL	R19	K1
      0x8C4C2721,  //  00EA  GETMET	R19	R19	K33
      0x8C54151B,  //  00EB  GETMET	R21	R10	K27
      0x585C0024,  //  00EC  LDCONST	R23	K36
      0x5860001D,  //  00ED  LDCONST	R24	K29
      0x7C540600,  //  00EE  CALL	R21	3
      0x7C4C0400,  //  00EF  CALL	R19	2
      0x7C3C0800,  //  00F0  CALL	R15	4
      0x8C3C170B,  //  00F1  GETMET	R15	R11	K11
      0x54460006,  //  00F2  LDINT	R17	7
      0x88480B0E,  //  00F3  GETMBR	R18	R5	K14
      0x584C0009,  //  00F4  LDCONST	R19	K9
      0x7C3C0800,  //  00F5  CALL	R15	4
      0x80041000,  //  00F6  RET	1	R8
      0x70020023,  //  00F7  JMP		#011C
      0x1C200F09,  //  00F8  EQ	R8	R7	K9
      0x7822000B,  //  00F9  JMPF	R8	#0106
      0x8C200706,  //  00FA  GETMET	R8	R3	K6
      0x88280B0C,  //  00FB  GETMBR	R10	R5	K12
      0xB82E2400,  //  00FC  GETNGBL	R11	K18
      0x8C2C1726,  //  00FD  GETMET	R11	R11	K38
      0x58340027,  //  00FE  LDCONST	R13	K39
      0x50380200,  //  00FF  LDBOOL	R14	1	0
      0x7C2C0600,  //  0100  CALL	R11	3
      0x942C1728,  //  0101  GETIDX	R11	R11	K40
      0x942C1729,  //  0102  GETIDX	R11	R11	K41
      0x7C200600,  //  0103  CALL	R8	3
      0x80041000,  //  0104  RET	1	R8
      0x70020015,  //  0105  JMP		#011C
      0x1C200F0D,  //  0106  EQ	R8	R7	K13
      0x7822000B,  //  0107  JMPF	R8	#0114
      0x8C200706,  //  0108  GETMET	R8	R3	K6
      0x88280B2A,  //  0109  GETMBR	R10	R5	K42
      0xB82E2400,  //  010A  GETNGBL	R11	K18
      0x8C2C1726,  //  010B  GETMET	R11	R11	K38
      0x5834002B,  //  010C  LDCONST	R13	K43
      0x50380200,  //  010D  LDBOOL	R14	1	0
      0x7C2C0600,  //  010E  CALL	R11	3
      0x942C172C,  //  010F  GETIDX	R11	R11	K44
      0x942C172D,  //  0110  GETIDX	R11	R11	K45
      0x7C200600,  //  0111  CALL	R8	3
      0x80041000,  //  0112  RET	1	R8
      0x70020007,  //  0113  JMP		#011C
      0x54220007,  //  0114  LDINT	R8	8
      0x1C200E08,  //  0115  EQ	R8	R7	R8
      0x78220004,  //  0116  JMPF	R8	#011C
      0x8C200706,  //  0117  GETMET	R8	R3	K6
      0x88280B10,  //  0118  GETMBR	R10	R5	K16
      0x502C0000,  //  0119  LDBOOL	R11	0	0
      0x7C200600,  //  011A  CALL	R8	3
      0x80041000,  //  011B  RET	1	R8
      0x7002028C,  //  011C  JMP		#03AA
      0x54220033,  //  011D  LDINT	R8	52
      0x1C200C08,  //  011E  EQ	R8	R6	R8
      0x78220000,  //  011F  JMPF	R8	#0121
      0x70020288,  //  0120  JMP		#03AA
      0x54220037,  //  0121  LDINT	R8	56
      0x1C200C08,  //  0122  EQ	R8	R6	R8
      0x7822002B,  //  0123  JMPF	R8	#0150
      0x1C200F05,  //  0124  EQ	R8	R7	K5
      0x7822000E,  //  0125  JMPF	R8	#0135
      0xB8225C00,  //  0126  GETNGBL	R8	K46
      0xB8262400,  //  0127  GETNGBL	R9	K18
      0x8C24132F,  //  0128  GETMET	R9	R9	K47
      0x7C240200,  //  0129  CALL	R9	1
      0x7C200200,  //  012A  CALL	R8	1
      0xB8265C00,  //  012B  GETNGBL	R9	K46
      0x58280030,  //  012C  LDCONST	R10	K48
      0x7C240200,  //  012D  CALL	R9	1
      0x08201009,  //  012E  MUL	R8	R8	R9
      0x8C240706,  //  012F  GETMET	R9	R3	K6
      0x882C0B07,  //  0130  GETMBR	R11	R5	K7
      0x5C301000,  //  0131  MOVE	R12	R8
      0x7C240600,  //  0132  CALL	R9	3
      0x80041200,  //  0133  RET	1	R9
      0x70020019,  //  0134  JMP		#014F
      0x1C200F09,  //  0135  EQ	R8	R7	K9
      0x78220005,  //  0136  JMPF	R8	#013D
      0x8C200706,  //  0137  GETMET	R8	R3	K6
      0x88280B0E,  //  0138  GETMBR	R10	R5	K14
      0x582C000F,  //  0139  LDCONST	R11	K15
      0x7C200600,  //  013A  CALL	R8	3
      0x80041000,  //  013B  RET	1	R8
      0x70020011,  //  013C  JMP		#014F
      0x54220006,  //  013D  LDINT	R8	7
      0x1C200E08,  //  013E  EQ	R8	R7	R8
      0x7822000E,  //  013F  JMPF	R8	#014F
      0xB8225C00,  //  0140  GETNGBL	R8	K46
      0xB8262400,  //  0141  GETNGBL	R9	K18
      0x8C241331,  //  0142  GETMET	R9	R9	K49
      0x7C240200,  //  0143  CALL	R9	1
      0x94241332,  //  0144  GETIDX	R9	R9	K50
      0x7C200200,  //  0145  CALL	R8	1
      0xB8265C00,  //  0146  GETNGBL	R9	K46
      0x58280030,  //  0147  LDCONST	R10	K48
      0x7C240200,  //  0148  CALL	R9	1
      0x08201009,  //  0149  MUL	R8	R8	R9
      0x8C240706,  //  014A  GETMET	R9	R3	K6
      0x882C0B07,  //  014B  GETMBR	R11	R5	K7
      0x5C301000,  //  014C  MOVE	R12	R8
      0x7C240600,  //  014D  CALL	R9	3
      0x80041200,  //  014E  RET	1	R9
      0x70020259,  //  014F  JMP		#03AA
      0x5422003D,  //  0150  LDINT	R8	62
      0x1C200C08,  //  0151  EQ	R8	R6	R8
      0x782200AE,  //  0152  JMPF	R8	#0202
      0x8C200133,  //  0153  GETMET	R8	R0	K51
      0x5C280400,  //  0154  MOVE	R10	R2
      0x7C200400,  //  0155  CALL	R8	2
      0x1C200F05,  //  0156  EQ	R8	R7	K5
      0x78220033,  //  0157  JMPF	R8	#018C
      0x8C200B11,  //  0158  GETMET	R8	R5	K17
      0x7C200200,  //  0159  CALL	R8	1
      0x88240534,  //  015A  GETMBR	R9	R2	K52
      0x78260005,  //  015B  JMPF	R9	#0162
      0x60240012,  //  015C  GETGBL	R9	G18
      0x7C240000,  //  015D  CALL	R9	0
      0x8C280335,  //  015E  GETMET	R10	R1	K53
      0x7C280200,  //  015F  CALL	R10	1
      0x4028120A,  //  0160  CONNECT	R10	R9	R10
      0x70020003,  //  0161  JMP		#0166
      0x88240136,  //  0162  GETMBR	R9	R0	K54
      0x88241337,  //  0163  GETMBR	R9	R9	K55
      0x8C241338,  //  0164  GETMET	R9	R9	K56
      0x7C240200,  //  0165  CALL	R9	1
      0x60280010,  //  0166  GETGBL	R10	G16
      0x5C2C1200,  //  0167  MOVE	R11	R9
      0x7C280200,  //  0168  CALL	R10	1
      0xA802001C,  //  0169  EXBLK	0	#0187
      0x5C2C1400,  //  016A  MOVE	R11	R10
      0x7C2C0000,  //  016B  CALL	R11	0
      0x4C300000,  //  016C  LDNIL	R12
      0x1C30160C,  //  016D  EQ	R12	R11	R12
      0x78320000,  //  016E  JMPF	R12	#0170
      0x7001FFF9,  //  016F  JMP		#016A
      0x8C301115,  //  0170  GETMET	R12	R8	K21
      0x4C380000,  //  0171  LDNIL	R14
      0x7C300400,  //  0172  CALL	R12	2
      0x8C34190B,  //  0173  GETMET	R13	R12	K11
      0x583C0009,  //  0174  LDCONST	R15	K9
      0x88400B39,  //  0175  GETMBR	R16	R5	K57
      0x8C44173A,  //  0176  GETMET	R17	R11	K58
      0x7C440200,  //  0177  CALL	R17	1
      0x7C340800,  //  0178  CALL	R13	4
      0x8C34190B,  //  0179  GETMET	R13	R12	K11
      0x583C000D,  //  017A  LDCONST	R15	K13
      0x88400B39,  //  017B  GETMBR	R16	R5	K57
      0x8C44173B,  //  017C  GETMET	R17	R11	K59
      0x7C440200,  //  017D  CALL	R17	1
      0x7C340800,  //  017E  CALL	R13	4
      0x8C34190B,  //  017F  GETMET	R13	R12	K11
      0xB83E0200,  //  0180  GETNGBL	R15	K1
      0x883C1F3C,  //  0181  GETMBR	R15	R15	K60
      0x88400B0C,  //  0182  GETMBR	R16	R5	K12
      0x8C44173D,  //  0183  GETMET	R17	R11	K61
      0x7C440200,  //  0184  CALL	R17	1
      0x7C340800,  //  0185  CALL	R13	4
      0x7001FFE2,  //  0186  JMP		#016A
      0x5828003E,  //  0187  LDCONST	R10	K62
      0xAC280200,  //  0188  CATCH	R10	1	0
      0xB0080000,  //  0189  RAISE	2	R0	R0
      0x80041000,  //  018A  RET	1	R8
      0x70020074,  //  018B  JMP		#0201
      0x1C200F09,  //  018C  EQ	R8	R7	K9
      0x78220049,  //  018D  JMPF	R8	#01D8
      0x8C200B11,  //  018E  GETMET	R8	R5	K17
      0x7C200200,  //  018F  CALL	R8	1
      0x88240534,  //  0190  GETMBR	R9	R2	K52
      0x78260005,  //  0191  JMPF	R9	#0198
      0x60240012,  //  0192  GETGBL	R9	G18
      0x7C240000,  //  0193  CALL	R9	0
      0x8C280335,  //  0194  GETMET	R10	R1	K53
      0x7C280200,  //  0195  CALL	R10	1
      0x4028120A,  //  0196  CONNECT	R10	R9	R10
      0x70020003,  //  0197  JMP		#019C
      0x88240136,  //  0198  GETMBR	R9	R0	K54
      0x88241337,  //  0199  GETMBR	R9	R9	K55
      0x8C241338,  //  019A  GETMET	R9	R9	K56
      0x7C240200,  //  019B  CALL	R9	1
      0x60280010,  //  019C  GETGBL	R10	G16
      0x5C2C1200,  //  019D  MOVE	R11	R9
      0x7C280200,  //  019E  CALL	R10	1
      0xA8020032,  //  019F  EXBLK	0	#01D3
      0x5C2C1400,  //  01A0  MOVE	R11	R10
      0x7C2C0000,  //  01A1  CALL	R11	0
      0x4C300000,  //  01A2  LDNIL	R12
      0x1C30160C,  //  01A3  EQ	R12	R11	R12
      0x78320000,  //  01A4  JMPF	R12	#01A6
      0x7001FFF9,  //  01A5  JMP		#01A0
      0x8C300B3F,  //  01A6  GETMET	R12	R5	K63
      0x8C381740,  //  01A7  GETMET	R14	R11	K64
      0x7C380200,  //  01A8  CALL	R14	1
      0x7C300400,  //  01A9  CALL	R12	2
      0x8C341115,  //  01AA  GETMET	R13	R8	K21
      0x4C3C0000,  //  01AB  LDNIL	R15
      0x7C340400,  //  01AC  CALL	R13	2
      0x8C381B0B,  //  01AD  GETMET	R14	R13	K11
      0x58400009,  //  01AE  LDCONST	R16	K9
      0x88440B39,  //  01AF  GETMBR	R17	R5	K57
      0x8C481941,  //  01B0  GETMET	R18	R12	K65
      0x54520008,  //  01B1  LDINT	R20	9
      0x7C480400,  //  01B2  CALL	R18	2
      0x7C380800,  //  01B3  CALL	R14	4
      0x8C381B0B,  //  01B4  GETMET	R14	R13	K11
      0x5840000D,  //  01B5  LDCONST	R16	K13
      0x88440B0C,  //  01B6  GETMBR	R17	R5	K12
      0x8C481742,  //  01B7  GETMET	R18	R11	K66
      0x7C480200,  //  01B8  CALL	R18	1
      0x7C380800,  //  01B9  CALL	R14	4
      0x8C381B0B,  //  01BA  GETMET	R14	R13	K11
      0x5840000F,  //  01BB  LDCONST	R16	K15
      0x88440B07,  //  01BC  GETMBR	R17	R5	K7
      0x8C481743,  //  01BD  GETMET	R18	R11	K67
      0x7C480200,  //  01BE  CALL	R18	1
      0x7C380800,  //  01BF  CALL	R14	4
      0x8C381B0B,  //  01C0  GETMET	R14	R13	K11
      0x54420003,  //  01C1  LDINT	R16	4
      0x88440B07,  //  01C2  GETMBR	R17	R5	K7
      0x8C481744,  //  01C3  GETMET	R18	R11	K68
      0x7C480200,  //  01C4  CALL	R18	1
      0x7C380800,  //  01C5  CALL	R14	4
      0x8C381B0B,  //  01C6  GETMET	R14	R13	K11
      0x54420004,  //  01C7  LDINT	R16	5
      0x88440B16,  //  01C8  GETMBR	R17	R5	K22
      0x8C481745,  //  01C9  GETMET	R18	R11	K69
      0x7C480200,  //  01CA  CALL	R18	1
      0x7C380800,  //  01CB  CALL	R14	4
      0x8C381B0B,  //  01CC  GETMET	R14	R13	K11
      0x544200FD,  //  01CD  LDINT	R16	254
      0x88440B0C,  //  01CE  GETMBR	R17	R5	K12
      0x8C48173D,  //  01CF  GETMET	R18	R11	K61
      0x7C480200,  //  01D0  CALL	R18	1
      0x7C380800,  //  01D1  CALL	R14	4
      0x7001FFCC,  //  01D2  JMP		#01A0
      0x5828003E,  //  01D3  LDCONST	R10	K62
      0xAC280200,  //  01D4  CATCH	R10	1	0
      0xB0080000,  //  01D5  RAISE	2	R0	R0
      0x80041000,  //  01D6  RET	1	R8
      0x70020028,  //  01D7  JMP		#0201
      0x1C200F0D,  //  01D8  EQ	R8	R7	K13
      0x78220007,  //  01D9  JMPF	R8	#01E2
      0x8C200706,  //  01DA  GETMET	R8	R3	K6
      0x88280B0E,  //  01DB  GETMBR	R10	R5	K14
      0xB82E0200,  //  01DC  GETNGBL	R11	K1
      0x882C1746,  //  01DD  GETMBR	R11	R11	K70
      0x882C1747,  //  01DE  GETMBR	R11	R11	K71
      0x7C200600,  //  01DF  CALL	R8	3
      0x80041000,  //  01E0  RET	1	R8
      0x7002001E,  //  01E1  JMP		#0201
      0x1C200F0F,  //  01E2  EQ	R8	R7	K15
      0x78220009,  //  01E3  JMPF	R8	#01EE
      0x88200136,  //  01E4  GETMBR	R8	R0	K54
      0x88201137,  //  01E5  GETMBR	R8	R8	K55
      0x8C201148,  //  01E6  GETMET	R8	R8	K72
      0x7C200200,  //  01E7  CALL	R8	1
      0x8C240706,  //  01E8  GETMET	R9	R3	K6
      0x882C0B0E,  //  01E9  GETMBR	R11	R5	K14
      0x5C301000,  //  01EA  MOVE	R12	R8
      0x7C240600,  //  01EB  CALL	R9	3
      0x80041200,  //  01EC  RET	1	R9
      0x70020012,  //  01ED  JMP		#0201
      0x54220003,  //  01EE  LDINT	R8	4
      0x1C200E08,  //  01EF  EQ	R8	R7	R8
      0x78220000,  //  01F0  JMPF	R8	#01F2
      0x7002000E,  //  01F1  JMP		#0201
      0x54220004,  //  01F2  LDINT	R8	5
      0x1C200E08,  //  01F3  EQ	R8	R7	R8
      0x7822000B,  //  01F4  JMPF	R8	#0201
      0x88200349,  //  01F5  GETMBR	R8	R1	K73
      0x8C20113D,  //  01F6  GETMET	R8	R8	K61
      0x7C200200,  //  01F7  CALL	R8	1
      0x4C240000,  //  01F8  LDNIL	R9
      0x1C241009,  //  01F9  EQ	R9	R8	R9
      0x78260000,  //  01FA  JMPF	R9	#01FC
      0x58200005,  //  01FB  LDCONST	R8	K5
      0x8C240706,  //  01FC  GETMET	R9	R3	K6
      0x882C0B0E,  //  01FD  GETMBR	R11	R5	K14
      0x5C301000,  //  01FE  MOVE	R12	R8
      0x7C240600,  //  01FF  CALL	R9	3
      0x80041200,  //  0200  RET	1	R9
      0x700201A7,  //  0201  JMP		#03AA
      0x5422003B,  //  0202  LDINT	R8	60
      0x1C200C08,  //  0203  EQ	R8	R6	R8
      0x7822003C,  //  0204  JMPF	R8	#0242
      0x1C200F05,  //  0205  EQ	R8	R7	K5
      0x78220012,  //  0206  JMPF	R8	#021A
      0x88200136,  //  0207  GETMBR	R8	R0	K54
      0x8C20114A,  //  0208  GETMET	R8	R8	K74
      0x7C200200,  //  0209  CALL	R8	1
      0x88240136,  //  020A  GETMBR	R9	R0	K54
      0x8C24134B,  //  020B  GETMET	R9	R9	K75
      0x7C240200,  //  020C  CALL	R9	1
      0x78220004,  //  020D  JMPF	R8	#0213
      0x78260001,  //  020E  JMPF	R9	#0211
      0x5828000D,  //  020F  LDCONST	R10	K13
      0x70020000,  //  0210  JMP		#0212
      0x58280009,  //  0211  LDCONST	R10	K9
      0x70020000,  //  0212  JMP		#0214
      0x58280005,  //  0213  LDCONST	R10	K5
      0x8C2C0706,  //  0214  GETMET	R11	R3	K6
      0x88340B0E,  //  0215  GETMBR	R13	R5	K14
      0x5C381400,  //  0216  MOVE	R14	R10
      0x7C2C0600,  //  0217  CALL	R11	3
      0x80041600,  //  0218  RET	1	R11
      0x70020026,  //  0219  JMP		#0241
      0x1C200F09,  //  021A  EQ	R8	R7	K9
      0x78220011,  //  021B  JMPF	R8	#022E
      0x88200136,  //  021C  GETMBR	R8	R0	K54
      0x8820114C,  //  021D  GETMBR	R8	R8	K76
      0x4C240000,  //  021E  LDNIL	R9
      0x20241009,  //  021F  NE	R9	R8	R9
      0x78260006,  //  0220  JMPF	R9	#0228
      0x8C240706,  //  0221  GETMET	R9	R3	K6
      0x882C0B0C,  //  0222  GETMBR	R11	R5	K12
      0x8C30113D,  //  0223  GETMET	R12	R8	K61
      0x7C300200,  //  0224  CALL	R12	1
      0x7C240600,  //  0225  CALL	R9	3
      0x80041200,  //  0226  RET	1	R9
      0x70020004,  //  0227  JMP		#022D
      0x8C240706,  //  0228  GETMET	R9	R3	K6
      0x882C0B18,  //  0229  GETMBR	R11	R5	K24
      0x4C300000,  //  022A  LDNIL	R12
      0x7C240600,  //  022B  CALL	R9	3
      0x80041200,  //  022C  RET	1	R9
      0x70020012,  //  022D  JMP		#0241
      0x1C200F0D,  //  022E  EQ	R8	R7	K13
      0x78220010,  //  022F  JMPF	R8	#0241
      0x88200136,  //  0230  GETMBR	R8	R0	K54
      0x8820114C,  //  0231  GETMBR	R8	R8	K76
      0x4C240000,  //  0232  LDNIL	R9
      0x20241009,  //  0233  NE	R9	R8	R9
      0x78260006,  //  0234  JMPF	R9	#023C
      0x8C240706,  //  0235  GETMET	R9	R3	K6
      0x882C0B0C,  //  0236  GETMBR	R11	R5	K12
      0x8C301142,  //  0237  GETMET	R12	R8	K66
      0x7C300200,  //  0238  CALL	R12	1
      0x7C240600,  //  0239  CALL	R9	3
      0x80041200,  //  023A  RET	1	R9
      0x70020004,  //  023B  JMP		#0241
      0x8C240706,  //  023C  GETMET	R9	R3	K6
      0x882C0B18,  //  023D  GETMBR	R11	R5	K24
      0x4C300000,  //  023E  LDNIL	R12
      0x7C240600,  //  023F  CALL	R9	3
      0x80041200,  //  0240  RET	1	R9
      0x70020167,  //  0241  JMP		#03AA
      0x54220027,  //  0242  LDINT	R8	40
      0x1C200C08,  //  0243  EQ	R8	R6	R8
      0x782200BA,  //  0244  JMPF	R8	#0300
      0x8C200133,  //  0245  GETMET	R8	R0	K51
      0x5C280400,  //  0246  MOVE	R10	R2
      0x7C200400,  //  0247  CALL	R8	2
      0x1C200F05,  //  0248  EQ	R8	R7	K5
      0x78220005,  //  0249  JMPF	R8	#0250
      0x8C200706,  //  024A  GETMET	R8	R3	K6
      0x88280B0C,  //  024B  GETMBR	R10	R5	K12
      0x582C0009,  //  024C  LDCONST	R11	K9
      0x7C200600,  //  024D  CALL	R8	3
      0x80041000,  //  024E  RET	1	R8
      0x700200AE,  //  024F  JMP		#02FF
      0x1C200F09,  //  0250  EQ	R8	R7	K9
      0x78220005,  //  0251  JMPF	R8	#0258
      0x8C200706,  //  0252  GETMET	R8	R3	K6
      0x88280B16,  //  0253  GETMBR	R10	R5	K22
      0x582C004D,  //  0254  LDCONST	R11	K77
      0x7C200600,  //  0255  CALL	R8	3
      0x80041000,  //  0256  RET	1	R8
      0x700200A6,  //  0257  JMP		#02FF
      0x1C200F0D,  //  0258  EQ	R8	R7	K13
      0x78220006,  //  0259  JMPF	R8	#0261
      0x8C200706,  //  025A  GETMET	R8	R3	K6
      0x88280B0C,  //  025B  GETMBR	R10	R5	K12
      0x882C0136,  //  025C  GETMBR	R11	R0	K54
      0x882C174E,  //  025D  GETMBR	R11	R11	K78
      0x7C200600,  //  025E  CALL	R8	3
      0x80041000,  //  025F  RET	1	R8
      0x7002009D,  //  0260  JMP		#02FF
      0x1C200F0F,  //  0261  EQ	R8	R7	K15
      0x7822000A,  //  0262  JMPF	R8	#026E
      0x8C200706,  //  0263  GETMET	R8	R3	K6
      0x88280B16,  //  0264  GETMBR	R10	R5	K22
      0xB82E2400,  //  0265  GETNGBL	R11	K18
      0x8C2C1726,  //  0266  GETMET	R11	R11	K38
      0x5834004F,  //  0267  LDCONST	R13	K79
      0x50380200,  //  0268  LDBOOL	R14	1	0
      0x7C2C0600,  //  0269  CALL	R11	3
      0x942C174F,  //  026A  GETIDX	R11	R11	K79
      0x7C200600,  //  026B  CALL	R8	3
      0x80041000,  //  026C  RET	1	R8
      0x70020090,  //  026D  JMP		#02FF
      0x54220003,  //  026E  LDINT	R8	4
      0x1C200E08,  //  026F  EQ	R8	R7	R8
      0x78220005,  //  0270  JMPF	R8	#0277
      0x8C200706,  //  0271  GETMET	R8	R3	K6
      0x88280B0C,  //  0272  GETMBR	R10	R5	K12
      0x542E7FFF,  //  0273  LDINT	R11	32768
      0x7C200600,  //  0274  CALL	R8	3
      0x80041000,  //  0275  RET	1	R8
      0x70020087,  //  0276  JMP		#02FF
      0x54220004,  //  0277  LDINT	R8	5
      0x1C200E08,  //  0278  EQ	R8	R7	R8
      0x7822000A,  //  0279  JMPF	R8	#0285
      0x8C200706,  //  027A  GETMET	R8	R3	K6
      0x88280B16,  //  027B  GETMBR	R10	R5	K22
      0xB82E2400,  //  027C  GETNGBL	R11	K18
      0x8C2C1726,  //  027D  GETMET	R11	R11	K38
      0x58340050,  //  027E  LDCONST	R13	K80
      0x50380200,  //  027F  LDBOOL	R14	1	0
      0x7C2C0600,  //  0280  CALL	R11	3
      0x942C1751,  //  0281  GETIDX	R11	R11	K81
      0x7C200600,  //  0282  CALL	R8	3
      0x80041000,  //  0283  RET	1	R8
      0x70020079,  //  0284  JMP		#02FF
      0x54220005,  //  0285  LDINT	R8	6
      0x1C200E08,  //  0286  EQ	R8	R7	R8
      0x78220005,  //  0287  JMPF	R8	#028E
      0x8C200706,  //  0288  GETMET	R8	R3	K6
      0x88280B16,  //  0289  GETMBR	R10	R5	K22
      0x582C0052,  //  028A  LDCONST	R11	K82
      0x7C200600,  //  028B  CALL	R8	3
      0x80041000,  //  028C  RET	1	R8
      0x70020070,  //  028D  JMP		#02FF
      0x54220006,  //  028E  LDINT	R8	7
      0x1C200E08,  //  028F  EQ	R8	R7	R8
      0x78220005,  //  0290  JMPF	R8	#0297
      0x8C200706,  //  0291  GETMET	R8	R3	K6
      0x88280B0C,  //  0292  GETMBR	R10	R5	K12
      0x582C0005,  //  0293  LDCONST	R11	K5
      0x7C200600,  //  0294  CALL	R8	3
      0x80041000,  //  0295  RET	1	R8
      0x70020067,  //  0296  JMP		#02FF
      0x54220007,  //  0297  LDINT	R8	8
      0x1C200E08,  //  0298  EQ	R8	R7	R8
      0x7822000B,  //  0299  JMPF	R8	#02A6
      0x8C200706,  //  029A  GETMET	R8	R3	K6
      0x88280B16,  //  029B  GETMBR	R10	R5	K22
      0xB82E2400,  //  029C  GETNGBL	R11	K18
      0x8C2C1726,  //  029D  GETMET	R11	R11	K38
      0x58340053,  //  029E  LDCONST	R13	K83
      0x50380200,  //  029F  LDBOOL	R14	1	0
      0x7C2C0600,  //  02A0  CALL	R11	3
      0x942C1754,  //  02A1  GETIDX	R11	R11	K84
      0x942C1755,  //  02A2  GETIDX	R11	R11	K85
      0x7C200600,  //  02A3  CALL	R8	3
      0x80041000,  //  02A4  RET	1	R8
      0x70020058,  //  02A5  JMP		#02FF
      0x54220008,  //  02A6  LDINT	R8	9
      0x1C200E08,  //  02A7  EQ	R8	R7	R8
      0x78220005,  //  02A8  JMPF	R8	#02AF
      0x8C200706,  //  02A9  GETMET	R8	R3	K6
      0x88280B0C,  //  02AA  GETMBR	R10	R5	K12
      0x582C0009,  //  02AB  LDCONST	R11	K9
      0x7C200600,  //  02AC  CALL	R8	3
      0x80041000,  //  02AD  RET	1	R8
      0x7002004F,  //  02AE  JMP		#02FF
      0x54220009,  //  02AF  LDINT	R8	10
      0x1C200E08,  //  02B0  EQ	R8	R7	R8
      0x78220015,  //  02B1  JMPF	R8	#02C8
      0xB8222400,  //  02B2  GETNGBL	R8	K18
      0x8C201126,  //  02B3  GETMET	R8	R8	K38
      0x58280053,  //  02B4  LDCONST	R10	K83
      0x502C0200,  //  02B5  LDBOOL	R11	1	0
      0x7C200600,  //  02B6  CALL	R8	3
      0x94201154,  //  02B7  GETIDX	R8	R8	K84
      0x94201156,  //  02B8  GETIDX	R8	R8	K86
      0x8C24091B,  //  02B9  GETMET	R9	R4	K27
      0x5C2C1000,  //  02BA  MOVE	R11	R8
      0x58300057,  //  02BB  LDCONST	R12	K87
      0x7C240600,  //  02BC  CALL	R9	3
      0x24281305,  //  02BD  GT	R10	R9	K5
      0x782A0002,  //  02BE  JMPF	R10	#02C2
      0x04281309,  //  02BF  SUB	R10	R9	K9
      0x402A0A0A,  //  02C0  CONNECT	R10	K5	R10
      0x9420100A,  //  02C1  GETIDX	R8	R8	R10
      0x8C280706,  //  02C2  GETMET	R10	R3	K6
      0x88300B16,  //  02C3  GETMBR	R12	R5	K22
      0x5C341000,  //  02C4  MOVE	R13	R8
      0x7C280600,  //  02C5  CALL	R10	3
      0x80041400,  //  02C6  RET	1	R10
      0x70020036,  //  02C7  JMP		#02FF
      0x5422000E,  //  02C8  LDINT	R8	15
      0x1C200E08,  //  02C9  EQ	R8	R7	R8
      0x7822000B,  //  02CA  JMPF	R8	#02D7
      0x8C200706,  //  02CB  GETMET	R8	R3	K6
      0x88280B16,  //  02CC  GETMBR	R10	R5	K22
      0xB82E2400,  //  02CD  GETNGBL	R11	K18
      0x8C2C1725,  //  02CE  GETMET	R11	R11	K37
      0x7C2C0200,  //  02CF  CALL	R11	1
      0x8C2C171B,  //  02D0  GETMET	R11	R11	K27
      0x5834001C,  //  02D1  LDCONST	R13	K28
      0x5838001D,  //  02D2  LDCONST	R14	K29
      0x7C2C0600,  //  02D3  CALL	R11	3
      0x7C200600,  //  02D4  CALL	R8	3
      0x80041000,  //  02D5  RET	1	R8
      0x70020027,  //  02D6  JMP		#02FF
      0x54220010,  //  02D7  LDINT	R8	17
      0x1C200E08,  //  02D8  EQ	R8	R7	R8
      0x78220005,  //  02D9  JMPF	R8	#02E0
      0x8C200706,  //  02DA  GETMET	R8	R3	K6
      0x88280B10,  //  02DB  GETMBR	R10	R5	K16
      0x582C0009,  //  02DC  LDCONST	R11	K9
      0x7C200600,  //  02DD  CALL	R8	3
      0x80041000,  //  02DE  RET	1	R8
      0x7002001E,  //  02DF  JMP		#02FF
      0x54220011,  //  02E0  LDINT	R8	18
      0x1C200E08,  //  02E1  EQ	R8	R7	R8
      0x7822000B,  //  02E2  JMPF	R8	#02EF
      0x8C200706,  //  02E3  GETMET	R8	R3	K6
      0x88280B16,  //  02E4  GETMBR	R10	R5	K22
      0xB82E2400,  //  02E5  GETNGBL	R11	K18
      0x8C2C1725,  //  02E6  GETMET	R11	R11	K37
      0x7C2C0200,  //  02E7  CALL	R11	1
      0x8C2C171B,  //  02E8  GETMET	R11	R11	K27
      0x5834001C,  //  02E9  LDCONST	R13	K28
      0x5838001D,  //  02EA  LDCONST	R14	K29
      0x7C2C0600,  //  02EB  CALL	R11	3
      0x7C200600,  //  02EC  CALL	R8	3
      0x80041000,  //  02ED  RET	1	R8
      0x7002000F,  //  02EE  JMP		#02FF
      0x54220012,  //  02EF  LDINT	R8	19
      0x1C200E08,  //  02F0  EQ	R8	R7	R8
      0x7822000C,  //  02F1  JMPF	R8	#02FF
      0x8C200B0A,  //  02F2  GETMET	R8	R5	K10
      0x7C200200,  //  02F3  CALL	R8	1
      0x8C24110B,  //  02F4  GETMET	R9	R8	K11
      0x582C0005,  //  02F5  LDCONST	R11	K5
      0x88300B0C,  //  02F6  GETMBR	R12	R5	K12
      0x5834000F,  //  02F7  LDCONST	R13	K15
      0x7C240800,  //  02F8  CALL	R9	4
      0x8C24110B,  //  02F9  GETMET	R9	R8	K11
      0x582C0009,  //  02FA  LDCONST	R11	K9
      0x88300B0C,  //  02FB  GETMBR	R12	R5	K12
      0x5834000F,  //  02FC  LDCONST	R13	K15
      0x7C240800,  //  02FD  CALL	R9	4
      0x80041000,  //  02FE  RET	1	R8
      0x700200A9,  //  02FF  JMP		#03AA
      0x5422003E,  //  0300  LDINT	R8	63
      0x1C200C08,  //  0301  EQ	R8	R6	R8
      0x78220000,  //  0302  JMPF	R8	#0304
      0x700200A5,  //  0303  JMP		#03AA
      0x54220029,  //  0304  LDINT	R8	42
      0x1C200C08,  //  0305  EQ	R8	R6	R8
      0x7822001D,  //  0306  JMPF	R8	#0325
      0x1C200F05,  //  0307  EQ	R8	R7	K5
      0x78220003,  //  0308  JMPF	R8	#030D
      0x8C200B11,  //  0309  GETMET	R8	R5	K17
      0x7C200200,  //  030A  CALL	R8	1
      0x80041000,  //  030B  RET	1	R8
      0x70020016,  //  030C  JMP		#0324
      0x1C200F09,  //  030D  EQ	R8	R7	K9
      0x78220005,  //  030E  JMPF	R8	#0315
      0x8C200706,  //  030F  GETMET	R8	R3	K6
      0x88280B10,  //  0310  GETMBR	R10	R5	K16
      0x582C0005,  //  0311  LDCONST	R11	K5
      0x7C200600,  //  0312  CALL	R8	3
      0x80041000,  //  0313  RET	1	R8
      0x7002000E,  //  0314  JMP		#0324
      0x1C200F0D,  //  0315  EQ	R8	R7	K13
      0x78220005,  //  0316  JMPF	R8	#031D
      0x8C200706,  //  0317  GETMET	R8	R3	K6
      0x88280B0E,  //  0318  GETMBR	R10	R5	K14
      0x582C0009,  //  0319  LDCONST	R11	K9
      0x7C200600,  //  031A  CALL	R8	3
      0x80041000,  //  031B  RET	1	R8
      0x70020006,  //  031C  JMP		#0324
      0x1C200F0F,  //  031D  EQ	R8	R7	K15
      0x78220004,  //  031E  JMPF	R8	#0324
      0x8C200706,  //  031F  GETMET	R8	R3	K6
      0x88280B18,  //  0320  GETMBR	R10	R5	K24
      0x4C2C0000,  //  0321  LDNIL	R11
      0x7C200600,  //  0322  CALL	R8	3
      0x80041000,  //  0323  RET	1	R8
      0x70020084,  //  0324  JMP		#03AA
      0x5422002A,  //  0325  LDINT	R8	43
      0x1C200C08,  //  0326  EQ	R8	R6	R8
      0x78220016,  //  0327  JMPF	R8	#033F
      0x1C200F05,  //  0328  EQ	R8	R7	K5
      0x78220007,  //  0329  JMPF	R8	#0332
      0x8C200706,  //  032A  GETMET	R8	R3	K6
      0x88280B16,  //  032B  GETMBR	R10	R5	K22
      0xB82E2400,  //  032C  GETNGBL	R11	K18
      0x8C2C1758,  //  032D  GETMET	R11	R11	K88
      0x7C2C0200,  //  032E  CALL	R11	1
      0x7C200600,  //  032F  CALL	R8	3
      0x80041000,  //  0330  RET	1	R8
      0x7002000B,  //  0331  JMP		#033E
      0x1C200F09,  //  0332  EQ	R8	R7	K9
      0x78220009,  //  0333  JMPF	R8	#033E
      0x8C200B11,  //  0334  GETMET	R8	R5	K17
      0x7C200200,  //  0335  CALL	R8	1
      0x8C24110B,  //  0336  GETMET	R9	R8	K11
      0x4C2C0000,  //  0337  LDNIL	R11
      0x88300B16,  //  0338  GETMBR	R12	R5	K22
      0xB8362400,  //  0339  GETNGBL	R13	K18
      0x8C341B58,  //  033A  GETMET	R13	R13	K88
      0x7C340200,  //  033B  CALL	R13	1
      0x7C240800,  //  033C  CALL	R9	4
      0x80041000,  //  033D  RET	1	R8
      0x7002006A,  //  033E  JMP		#03AA
      0x5422002B,  //  033F  LDINT	R8	44
      0x1C200C08,  //  0340  EQ	R8	R6	R8
      0x7822001C,  //  0341  JMPF	R8	#035F
      0x1C200F05,  //  0342  EQ	R8	R7	K5
      0x78220005,  //  0343  JMPF	R8	#034A
      0x8C200706,  //  0344  GETMET	R8	R3	K6
      0x88280B0E,  //  0345  GETMBR	R10	R5	K14
      0x582C0009,  //  0346  LDCONST	R11	K9
      0x7C200600,  //  0347  CALL	R8	3
      0x80041000,  //  0348  RET	1	R8
      0x70020013,  //  0349  JMP		#035E
      0x1C200F09,  //  034A  EQ	R8	R7	K9
      0x78220005,  //  034B  JMPF	R8	#0352
      0x8C200706,  //  034C  GETMET	R8	R3	K6
      0x88280B0E,  //  034D  GETMBR	R10	R5	K14
      0x542E0003,  //  034E  LDINT	R11	4
      0x7C200600,  //  034F  CALL	R8	3
      0x80041000,  //  0350  RET	1	R8
      0x7002000B,  //  0351  JMP		#035E
      0x1C200F0D,  //  0352  EQ	R8	R7	K13
      0x78220009,  //  0353  JMPF	R8	#035E
      0x8C200B11,  //  0354  GETMET	R8	R5	K17
      0x7C200200,  //  0355  CALL	R8	1
      0x8C24110B,  //  0356  GETMET	R9	R8	K11
      0x4C2C0000,  //  0357  LDNIL	R11
      0x8C300B59,  //  0358  GETMET	R12	R5	K89
      0x88380B0E,  //  0359  GETMBR	R14	R5	K14
      0x543E0003,  //  035A  LDINT	R15	4
      0x7C300600,  //  035B  CALL	R12	3
      0x7C240600,  //  035C  CALL	R9	3
      0x80041000,  //  035D  RET	1	R8
      0x7002004A,  //  035E  JMP		#03AA
      0x54220030,  //  035F  LDINT	R8	49
      0x1C200C08,  //  0360  EQ	R8	R6	R8
      0x78220010,  //  0361  JMPF	R8	#0373
      0x1C200F0F,  //  0362  EQ	R8	R7	K15
      0x78220005,  //  0363  JMPF	R8	#036A
      0x8C200706,  //  0364  GETMET	R8	R3	K6
      0x88280B0E,  //  0365  GETMBR	R10	R5	K14
      0x542E001D,  //  0366  LDINT	R11	30
      0x7C200600,  //  0367  CALL	R8	3
      0x80041000,  //  0368  RET	1	R8
      0x70020007,  //  0369  JMP		#0372
      0x5422FFFB,  //  036A  LDINT	R8	65532
      0x1C200E08,  //  036B  EQ	R8	R7	R8
      0x78220004,  //  036C  JMPF	R8	#0372
      0x8C200706,  //  036D  GETMET	R8	R3	K6
      0x88280B2A,  //  036E  GETMBR	R10	R5	K42
      0x542E0003,  //  036F  LDINT	R11	4
      0x7C200600,  //  0370  CALL	R8	3
      0x80041000,  //  0371  RET	1	R8
      0x70020036,  //  0372  JMP		#03AA
      0x5422001C,  //  0373  LDINT	R8	29
      0x1C200C08,  //  0374  EQ	R8	R6	R8
      0x7822002A,  //  0375  JMPF	R8	#03A1
      0x1C200F0F,  //  0376  EQ	R8	R7	K15
      0x7822001E,  //  0377  JMPF	R8	#0397
      0x8C200B11,  //  0378  GETMET	R8	R5	K17
      0x7C200200,  //  0379  CALL	R8	1
      0x88240136,  //  037A  GETMBR	R9	R0	K54
      0x8C24135A,  //  037B  GETMET	R9	R9	K90
      0x502C0200,  //  037C  LDBOOL	R11	1	0
      0x7C240400,  //  037D  CALL	R9	2
      0x88280136,  //  037E  GETMBR	R10	R0	K54
      0x8828155B,  //  037F  GETMBR	R10	R10	K91
      0x602C0010,  //  0380  GETGBL	R11	G16
      0x5C301200,  //  0381  MOVE	R12	R9
      0x7C2C0200,  //  0382  CALL	R11	1
      0xA802000D,  //  0383  EXBLK	0	#0392
      0x5C301600,  //  0384  MOVE	R12	R11
      0x7C300000,  //  0385  CALL	R12	0
      0x5C341400,  //  0386  MOVE	R13	R10
      0x78360003,  //  0387  JMPF	R13	#038C
      0xB8360200,  //  0388  GETNGBL	R13	K1
      0x88341B3C,  //  0389  GETMBR	R13	R13	K60
      0x1434180D,  //  038A  LT	R13	R12	R13
      0x78360004,  //  038B  JMPF	R13	#0391
      0x8C34110B,  //  038C  GETMET	R13	R8	K11
      0x4C3C0000,  //  038D  LDNIL	R15
      0x88400B0C,  //  038E  GETMBR	R16	R5	K12
      0x5C441800,  //  038F  MOVE	R17	R12
      0x7C340800,  //  0390  CALL	R13	4
      0x7001FFF1,  //  0391  JMP		#0384
      0x582C003E,  //  0392  LDCONST	R11	K62
      0xAC2C0200,  //  0393  CATCH	R11	1	0
      0xB0080000,  //  0394  RAISE	2	R0	R0
      0x80041000,  //  0395  RET	1	R8
      0x70020008,  //  0396  JMP		#03A0
      0x60200003,  //  0397  GETGBL	R8	G3
      0x5C240000,  //  0398  MOVE	R9	R0
      0x7C200200,  //  0399  CALL	R8	1
      0x8C20115C,  //  039A  GETMET	R8	R8	K92
      0x5C280200,  //  039B  MOVE	R10	R1
      0x5C2C0400,  //  039C  MOVE	R11	R2
      0x5C300600,  //  039D  MOVE	R12	R3
      0x7C200800,  //  039E  CALL	R8	4
      0x80041000,  //  039F  RET	1	R8
      0x70020008,  //  03A0  JMP		#03AA
      0x60200003,  //  03A1  GETGBL	R8	G3
      0x5C240000,  //  03A2  MOVE	R9	R0
      0x7C200200,  //  03A3  CALL	R8	1
      0x8C20115C,  //  03A4  GETMET	R8	R8	K92
      0x5C280200,  //  03A5  MOVE	R10	R1
      0x5C2C0400,  //  03A6  MOVE	R11	R2
      0x5C300600,  //  03A7  MOVE	R12	R3
      0x7C200800,  //  03A8  CALL	R8	4
      0x80041000,  //  03A9  RET	1	R8
      0x80000000,  //  03AA  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Root_write_attribute,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(attribute),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(int),
    /* K6   */  be_nested_str_weak(int64),
    /* K7   */  be_nested_str_weak(_breadcrumb),
    /* K8   */  be_nested_str_weak(attribute_updated),
    /* K9   */  be_nested_str_weak(status),
    /* K10  */  be_nested_str_weak(CONSTRAINT_ERROR),
    /* K11  */  be_const_int(1),
    /* K12  */  be_nested_str_weak(INVALID_ACTION),
    }),
    be_str_weak(write_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[100]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E002F,  //  0004  LDINT	R7	48
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0019,  //  0006  JMPF	R7	#0021
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E0016,  //  0008  JMPF	R7	#0020
      0x601C0004,  //  0009  GETGBL	R7	G4
      0x5C200600,  //  000A  MOVE	R8	R3
      0x7C1C0200,  //  000B  CALL	R7	1
      0x1C1C0F05,  //  000C  EQ	R7	R7	K5
      0x741E0004,  //  000D  JMPT	R7	#0013
      0x601C000F,  //  000E  GETGBL	R7	G15
      0x5C200600,  //  000F  MOVE	R8	R3
      0xB8260C00,  //  0010  GETNGBL	R9	K6
      0x7C1C0400,  //  0011  CALL	R7	2
      0x781E0007,  //  0012  JMPF	R7	#001B
      0x90060E03,  //  0013  SETMBR	R1	K7	R3
      0x8C1C0108,  //  0014  GETMET	R7	R0	K8
      0x88240502,  //  0015  GETMBR	R9	R2	K2
      0x88280503,  //  0016  GETMBR	R10	R2	K3
      0x7C1C0600,  //  0017  CALL	R7	3
      0x501C0200,  //  0018  LDBOOL	R7	1	0
      0x80040E00,  //  0019  RET	1	R7
      0x70020004,  //  001A  JMP		#0020
      0xB81E0000,  //  001B  GETNGBL	R7	K0
      0x881C0F0A,  //  001C  GETMBR	R7	R7	K10
      0x900A1207,  //  001D  SETMBR	R2	K9	R7
      0x501C0000,  //  001E  LDBOOL	R7	0	0
      0x80040E00,  //  001F  RET	1	R7
      0x70020041,  //  0020  JMP		#0063
      0x541E001E,  //  0021  LDINT	R7	31
      0x1C1C0A07,  //  0022  EQ	R7	R5	R7
      0x781E0004,  //  0023  JMPF	R7	#0029
      0x1C1C0D04,  //  0024  EQ	R7	R6	K4
      0x781E0001,  //  0025  JMPF	R7	#0028
      0x501C0200,  //  0026  LDBOOL	R7	1	0
      0x80040E00,  //  0027  RET	1	R7
      0x70020039,  //  0028  JMP		#0063
      0x541E0027,  //  0029  LDINT	R7	40
      0x1C1C0A07,  //  002A  EQ	R7	R5	R7
      0x781E000B,  //  002B  JMPF	R7	#0038
      0x541E0004,  //  002C  LDINT	R7	5
      0x1C1C0C07,  //  002D  EQ	R7	R6	R7
      0x781E0002,  //  002E  JMPF	R7	#0032
      0x501C0200,  //  002F  LDBOOL	R7	1	0
      0x80040E00,  //  0030  RET	1	R7
      0x70020004,  //  0031  JMP		#0037
      0x541E0005,  //  0032  LDINT	R7	6
      0x1C1C0C07,  //  0033  EQ	R7	R6	R7
      0x781E0001,  //  0034  JMPF	R7	#0037
      0x501C0200,  //  0035  LDBOOL	R7	1	0
      0x80040E00,  //  0036  RET	1	R7
      0x7002002A,  //  0037  JMP		#0063
      0x541E0029,  //  0038  LDINT	R7	42
      0x1C1C0A07,  //  0039  EQ	R7	R5	R7
      0x781E0004,  //  003A  JMPF	R7	#0040
      0x1C1C0D04,  //  003B  EQ	R7	R6	K4
      0x781E0001,  //  003C  JMPF	R7	#003F
      0x501C0200,  //  003D  LDBOOL	R7	1	0
      0x80040E00,  //  003E  RET	1	R7
      0x70020022,  //  003F  JMP		#0063
      0x541E002A,  //  0040  LDINT	R7	43
      0x1C1C0A07,  //  0041  EQ	R7	R5	R7
      0x781E0007,  //  0042  JMPF	R7	#004B
      0x1C1C0D04,  //  0043  EQ	R7	R6	K4
      0x781E0004,  //  0044  JMPF	R7	#004A
      0xB81E0000,  //  0045  GETNGBL	R7	K0
      0x881C0F0A,  //  0046  GETMBR	R7	R7	K10
      0x900A1207,  //  0047  SETMBR	R2	K9	R7
      0x501C0000,  //  0048  LDBOOL	R7	0	0
      0x80040E00,  //  0049  RET	1	R7
      0x70020017,  //  004A  JMP		#0063
      0x541E002B,  //  004B  LDINT	R7	44
      0x1C1C0A07,  //  004C  EQ	R7	R5	R7
      0x781E0009,  //  004D  JMPF	R7	#0058
      0x1C1C0D04,  //  004E  EQ	R7	R6	K4
      0x781E0002,  //  004F  JMPF	R7	#0053
      0x501C0200,  //  0050  LDBOOL	R7	1	0
      0x80040E00,  //  0051  RET	1	R7
      0x70020003,  //  0052  JMP		#0057
      0x1C1C0D0B,  //  0053  EQ	R7	R6	K11
      0x781E0001,  //  0054  JMPF	R7	#0057
      0x501C0200,  //  0055  LDBOOL	R7	1	0
      0x80040E00,  //  0056  RET	1	R7
      0x7002000A,  //  0057  JMP		#0063
      0x541E0030,  //  0058  LDINT	R7	49
      0x1C1C0A07,  //  0059  EQ	R7	R5	R7
      0x781E0007,  //  005A  JMPF	R7	#0063
      0x541E0003,  //  005B  LDINT	R7	4
      0x1C1C0C07,  //  005C  EQ	R7	R6	R7
      0x781E0004,  //  005D  JMPF	R7	#0063
      0xB81E0000,  //  005E  GETNGBL	R7	K0
      0x881C0F0C,  //  005F  GETMBR	R7	R7	K12
      0x900A1207,  //  0060  SETMBR	R2	K9	R7
      0x501C0000,  //  0061  LDBOOL	R7	0	0
      0x80040E00,  //  0062  RET	1	R7
      0x80000000,  //  0063  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invoke_request
********************************************************************/
be_local_closure(Matter_Plugin_Root_invoke_request,   /* name */
  be_nested_proto(
    30,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        3,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 2]) {  /* upvals */
          be_local_const_upval(1, 0),
          be_local_const_upval(1, 10),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 2]) {     /* constants */
        /* K0   */  be_nested_str_weak(device),
        /* K1   */  be_nested_str_weak(remove_fabric),
        }),
        be_str_weak(_anonymous_),
        &be_const_str_solidified,
        ( &(const binstruction[ 6]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x88000100,  //  0001  GETMBR	R0	R0	K0
          0x8C000101,  //  0002  GETMET	R0	R0	K1
          0x68080001,  //  0003  GETUPV	R2	U1
          0x7C000400,  //  0004  CALL	R0	2
          0x80000000,  //  0005  RET	0
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[100]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(command),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(findsubval),
    /* K7   */  be_const_int(1),
    /* K8   */  be_nested_str_weak(_breadcrumb),
    /* K9   */  be_nested_str_weak(Matter_TLV_struct),
    /* K10  */  be_nested_str_weak(add_TLV),
    /* K11  */  be_nested_str_weak(U1),
    /* K12  */  be_nested_str_weak(UTF1),
    /* K13  */  be_nested_str_weak(),
    /* K14  */  be_const_int(2),
    /* K15  */  be_nested_str_weak(XX),
    /* K16  */  be_const_int(3),
    /* K17  */  be_nested_str_weak(ack_request),
    /* K18  */  be_nested_str_weak(_fabric),
    /* K19  */  be_nested_str_weak(fabric_completed),
    /* K20  */  be_nested_str_weak(set_no_expiration),
    /* K21  */  be_nested_str_weak(save),
    /* K22  */  be_nested_str_weak(device),
    /* K23  */  be_nested_str_weak(start_commissioning_complete_deferred),
    /* K24  */  be_nested_str_weak(context_error),
    /* K25  */  be_nested_str_weak(CommissioningComplete_X3A_X20no_X20fabric_X20attached),
    /* K26  */  be_nested_str_weak(status),
    /* K27  */  be_nested_str_weak(UNSUPPORTED_COMMAND),
    /* K28  */  be_nested_str_weak(B2),
    /* K29  */  be_nested_str_weak(DAC_Cert_FFF1_8000),
    /* K30  */  be_nested_str_weak(PAI_Cert_FFF1),
    /* K31  */  be_nested_str_weak(CD_FFF1_8000),
    /* K32  */  be_nested_str_weak(B1),
    /* K33  */  be_nested_str_weak(U4),
    /* K34  */  be_nested_str_weak(tasmota),
    /* K35  */  be_nested_str_weak(rtc_utc),
    /* K36  */  be_nested_str_weak(tlv2raw),
    /* K37  */  be_nested_str_weak(get_ac),
    /* K38  */  be_nested_str_weak(EC_P256),
    /* K39  */  be_nested_str_weak(ecdsa_sign_sha256),
    /* K40  */  be_nested_str_weak(DAC_Priv_FFF1_8000),
    /* K41  */  be_nested_str_weak(gen_CSR),
    /* K42  */  be_nested_str_weak(set_temp_ca),
    /* K43  */  be_nested_str_weak(SUCCESS),
    /* K44  */  be_nested_str_weak(log),
    /* K45  */  be_nested_str_weak(MTR_X3A_X20AddNoc_X20Args_X3D),
    /* K46  */  be_nested_str_weak(get_temp_ca),
    /* K47  */  be_nested_str_weak(MTR_X3A_X20Error_X3A_X20AdNOC_X20without_X20CA),
    /* K48  */  be_nested_str_weak(sessions),
    /* K49  */  be_nested_str_weak(create_fabric),
    /* K50  */  be_nested_str_weak(set_ca),
    /* K51  */  be_nested_str_weak(set_noc_icac),
    /* K52  */  be_nested_str_weak(set_ipk_epoch_key),
    /* K53  */  be_nested_str_weak(set_admin_subject_vendor),
    /* K54  */  be_nested_str_weak(set_pk),
    /* K55  */  be_nested_str_weak(get_pk),
    /* K56  */  be_nested_str_weak(parse),
    /* K57  */  be_nested_str_weak(findsub),
    /* K58  */  be_nested_str_weak(MTR_X3A_X20Error_X3A_X20no_X20fabricid_X20nor_X20deviceid_X20in_X20NOC_X20certificate),
    /* K59  */  be_nested_str_weak(int),
    /* K60  */  be_nested_str_weak(int64),
    /* K61  */  be_nested_str_weak(fromu32),
    /* K62  */  be_nested_str_weak(tobytes),
    /* K63  */  be_nested_str_weak(get_temp_ca_pub),
    /* K64  */  be_const_int(2147483647),
    /* K65  */  be_nested_str_weak(fromstring),
    /* K66  */  be_nested_str_weak(CompressedFabric),
    /* K67  */  be_nested_str_weak(HKDF_SHA256),
    /* K68  */  be_nested_str_weak(copy),
    /* K69  */  be_nested_str_weak(reverse),
    /* K70  */  be_nested_str_weak(derive),
    /* K71  */  be_nested_str_weak(commissioning_admin_fabric),
    /* K72  */  be_nested_str_weak(set_fabric_device),
    /* K73  */  be_nested_str_weak(fabric_candidate),
    /* K74  */  be_nested_str_weak(start_operational_discovery_deferred),
    /* K75  */  be_nested_str_weak(is_PASE),
    /* K76  */  be_nested_str_weak(set_expire_in_seconds),
    /* K77  */  be_nested_str_weak(log_new_fabric),
    /* K78  */  be_nested_str_weak(set_fabric_label),
    /* K79  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Update_X20fabric_X20_X27_X25s_X27_X20label_X3D_X27_X25s_X27),
    /* K80  */  be_nested_str_weak(get_fabric_id),
    /* K81  */  be_nested_str_weak(tohex),
    /* K82  */  be_nested_str_weak(fabric_index_X3A),
    /* K83  */  be_nested_str_weak(active_fabrics),
    /* K84  */  be_nested_str_weak(get_fabric_index),
    /* K85  */  be_nested_str_weak(set_timer),
    /* K86  */  be_nested_str_weak(stop_iteration),
    /* K87  */  be_nested_str_weak(MTR_X3A_X20RemoveFabric_X20fabric_X28),
    /* K88  */  be_nested_str_weak(_X29_X20not_X20found),
    /* K89  */  be_nested_str_weak(INVALID_ACTION),
    /* K90  */  be_nested_str_weak(MTR_X3A_X20OpenCommissioningWindow_X28timeout_X3D_X25i_X2C_X20passcode_X3D_X25s_X2C_X20discriminator_X3D_X25i_X2C_X20iterations_X3D_X25i_X2C_X20salt_X3D_X25s_X29),
    /* K91  */  be_nested_str_weak(INVALID_DATA_TYPE),
    /* K92  */  be_nested_str_weak(MTR_X3A_X20wrong_X20size_X20for_X20PAKE_X20parameters),
    /* K93  */  be_nested_str_weak(CONSTRAINT_ERROR),
    /* K94  */  be_nested_str_weak(start_basic_commissioning),
    /* K95  */  be_nested_str_weak(get_fabric),
    /* K96  */  be_nested_str_weak(MTR_X3A_X20OpenBasicCommissioningWindow_X20commissioning_timeout_X3D),
    /* K97  */  be_nested_str_weak(start_root_basic_commissioning),
    /* K98  */  be_nested_str_weak(stop_basic_commissioning),
    /* K99  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[712]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0xB8160200,  //  0001  GETNGBL	R5	K1
      0x88140B02,  //  0002  GETMBR	R5	R5	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x881C0704,  //  0004  GETMBR	R7	R3	K4
      0x5422002F,  //  0005  LDINT	R8	48
      0x1C200C08,  //  0006  EQ	R8	R6	R8
      0x7822005C,  //  0007  JMPF	R8	#0065
      0x1C200F05,  //  0008  EQ	R8	R7	K5
      0x78220017,  //  0009  JMPF	R8	#0022
      0x8C200506,  //  000A  GETMET	R8	R2	K6
      0x58280005,  //  000B  LDCONST	R10	K5
      0x542E0383,  //  000C  LDINT	R11	900
      0x7C200600,  //  000D  CALL	R8	3
      0x8C240506,  //  000E  GETMET	R9	R2	K6
      0x582C0007,  //  000F  LDCONST	R11	K7
      0x58300005,  //  0010  LDCONST	R12	K5
      0x7C240600,  //  0011  CALL	R9	3
      0x90061009,  //  0012  SETMBR	R1	K8	R9
      0x8C280B09,  //  0013  GETMET	R10	R5	K9
      0x7C280200,  //  0014  CALL	R10	1
      0x8C2C150A,  //  0015  GETMET	R11	R10	K10
      0x58340005,  //  0016  LDCONST	R13	K5
      0x88380B0B,  //  0017  GETMBR	R14	R5	K11
      0x583C0005,  //  0018  LDCONST	R15	K5
      0x7C2C0800,  //  0019  CALL	R11	4
      0x8C2C150A,  //  001A  GETMET	R11	R10	K10
      0x58340007,  //  001B  LDCONST	R13	K7
      0x88380B0C,  //  001C  GETMBR	R14	R5	K12
      0x583C000D,  //  001D  LDCONST	R15	K13
      0x7C2C0800,  //  001E  CALL	R11	4
      0x900E0907,  //  001F  SETMBR	R3	K4	K7
      0x80041400,  //  0020  RET	1	R10
      0x70020041,  //  0021  JMP		#0064
      0x1C200F0E,  //  0022  EQ	R8	R7	K14
      0x7822001A,  //  0023  JMPF	R8	#003F
      0x8C200506,  //  0024  GETMET	R8	R2	K6
      0x58280005,  //  0025  LDCONST	R10	K5
      0x7C200400,  //  0026  CALL	R8	2
      0x8C240506,  //  0027  GETMET	R9	R2	K6
      0x582C0007,  //  0028  LDCONST	R11	K7
      0x5830000F,  //  0029  LDCONST	R12	K15
      0x7C240600,  //  002A  CALL	R9	3
      0x8C280506,  //  002B  GETMET	R10	R2	K6
      0x5830000E,  //  002C  LDCONST	R12	K14
      0x58340005,  //  002D  LDCONST	R13	K5
      0x7C280600,  //  002E  CALL	R10	3
      0x9006100A,  //  002F  SETMBR	R1	K8	R10
      0x8C2C0B09,  //  0030  GETMET	R11	R5	K9
      0x7C2C0200,  //  0031  CALL	R11	1
      0x8C30170A,  //  0032  GETMET	R12	R11	K10
      0x58380005,  //  0033  LDCONST	R14	K5
      0x883C0B0B,  //  0034  GETMBR	R15	R5	K11
      0x58400005,  //  0035  LDCONST	R16	K5
      0x7C300800,  //  0036  CALL	R12	4
      0x8C30170A,  //  0037  GETMET	R12	R11	K10
      0x58380007,  //  0038  LDCONST	R14	K7
      0x883C0B0C,  //  0039  GETMBR	R15	R5	K12
      0x5840000D,  //  003A  LDCONST	R16	K13
      0x7C300800,  //  003B  CALL	R12	4
      0x900E0910,  //  003C  SETMBR	R3	K4	K16
      0x80041600,  //  003D  RET	1	R11
      0x70020024,  //  003E  JMP		#0064
      0x54220003,  //  003F  LDINT	R8	4
      0x1C200E08,  //  0040  EQ	R8	R7	R8
      0x78220021,  //  0041  JMPF	R8	#0064
      0x8C200111,  //  0042  GETMET	R8	R0	K17
      0x5C280600,  //  0043  MOVE	R10	R3
      0x7C200400,  //  0044  CALL	R8	2
      0x88200312,  //  0045  GETMBR	R8	R1	K18
      0x7822001B,  //  0046  JMPF	R8	#0063
      0x90061105,  //  0047  SETMBR	R1	K8	K5
      0x88200312,  //  0048  GETMBR	R8	R1	K18
      0x8C201113,  //  0049  GETMET	R8	R8	K19
      0x7C200200,  //  004A  CALL	R8	1
      0x8C200314,  //  004B  GETMET	R8	R1	K20
      0x7C200200,  //  004C  CALL	R8	1
      0x8C200315,  //  004D  GETMET	R8	R1	K21
      0x7C200200,  //  004E  CALL	R8	1
      0x8C200B09,  //  004F  GETMET	R8	R5	K9
      0x7C200200,  //  0050  CALL	R8	1
      0x8C24110A,  //  0051  GETMET	R9	R8	K10
      0x582C0005,  //  0052  LDCONST	R11	K5
      0x88300B0B,  //  0053  GETMBR	R12	R5	K11
      0x58340005,  //  0054  LDCONST	R13	K5
      0x7C240800,  //  0055  CALL	R9	4
      0x8C24110A,  //  0056  GETMET	R9	R8	K10
      0x582C0007,  //  0057  LDCONST	R11	K7
      0x88300B0C,  //  0058  GETMBR	R12	R5	K12
      0x5834000D,  //  0059  LDCONST	R13	K13
      0x7C240800,  //  005A  CALL	R9	4
      0x54260004,  //  005B  LDINT	R9	5
      0x900E0809,  //  005C  SETMBR	R3	K4	R9
      0x88240116,  //  005D  GETMBR	R9	R0	K22
      0x8C241317,  //  005E  GETMET	R9	R9	K23
      0x5C2C0200,  //  005F  MOVE	R11	R1
      0x7C240400,  //  0060  CALL	R9	2
      0x80041000,  //  0061  RET	1	R8
      0x70020000,  //  0062  JMP		#0064
      0xB0063119,  //  0063  RAISE	1	K24	K25
      0x70020260,  //  0064  JMP		#02C6
      0x5422003D,  //  0065  LDINT	R8	62
      0x1C200C08,  //  0066  EQ	R8	R6	R8
      0x782201C1,  //  0067  JMPF	R8	#022A
      0x1C200F0E,  //  0068  EQ	R8	R7	K14
      0x7822001D,  //  0069  JMPF	R8	#0088
      0x8C200506,  //  006A  GETMET	R8	R2	K6
      0x58280005,  //  006B  LDCONST	R10	K5
      0x7C200400,  //  006C  CALL	R8	2
      0x20241107,  //  006D  NE	R9	R8	K7
      0x78260006,  //  006E  JMPF	R9	#0076
      0x2024110E,  //  006F  NE	R9	R8	K14
      0x78260004,  //  0070  JMPF	R9	#0076
      0xB8260200,  //  0071  GETNGBL	R9	K1
      0x8824131B,  //  0072  GETMBR	R9	R9	K27
      0x900E3409,  //  0073  SETMBR	R3	K26	R9
      0x4C240000,  //  0074  LDNIL	R9
      0x80041200,  //  0075  RET	1	R9
      0x8C240B09,  //  0076  GETMET	R9	R5	K9
      0x7C240200,  //  0077  CALL	R9	1
      0x8C28130A,  //  0078  GETMET	R10	R9	K10
      0x58300005,  //  0079  LDCONST	R12	K5
      0x88340B1C,  //  007A  GETMBR	R13	R5	K28
      0x1C381107,  //  007B  EQ	R14	R8	K7
      0x783A0003,  //  007C  JMPF	R14	#0081
      0xB83A0200,  //  007D  GETNGBL	R14	K1
      0x8C381D1D,  //  007E  GETMET	R14	R14	K29
      0x7C380200,  //  007F  CALL	R14	1
      0x70020002,  //  0080  JMP		#0084
      0xB83A0200,  //  0081  GETNGBL	R14	K1
      0x8C381D1E,  //  0082  GETMET	R14	R14	K30
      0x7C380200,  //  0083  CALL	R14	1
      0x7C280800,  //  0084  CALL	R10	4
      0x900E0910,  //  0085  SETMBR	R3	K4	K16
      0x80041200,  //  0086  RET	1	R9
      0x700201A0,  //  0087  JMP		#0229
      0x1C200F05,  //  0088  EQ	R8	R7	K5
      0x7822003C,  //  0089  JMPF	R8	#00C7
      0x8C200506,  //  008A  GETMET	R8	R2	K6
      0x58280005,  //  008B  LDCONST	R10	K5
      0x7C200400,  //  008C  CALL	R8	2
      0x6024000C,  //  008D  GETGBL	R9	G12
      0x5C281000,  //  008E  MOVE	R10	R8
      0x7C240200,  //  008F  CALL	R9	1
      0x542A001F,  //  0090  LDINT	R10	32
      0x2024120A,  //  0091  NE	R9	R9	R10
      0x78260001,  //  0092  JMPF	R9	#0095
      0x4C240000,  //  0093  LDNIL	R9
      0x80041200,  //  0094  RET	1	R9
      0x900E0907,  //  0095  SETMBR	R3	K4	K7
      0x8C240B09,  //  0096  GETMET	R9	R5	K9
      0x7C240200,  //  0097  CALL	R9	1
      0x8C28130A,  //  0098  GETMET	R10	R9	K10
      0x58300007,  //  0099  LDCONST	R12	K7
      0x88340B1C,  //  009A  GETMBR	R13	R5	K28
      0xB83A0200,  //  009B  GETNGBL	R14	K1
      0x8C381D1F,  //  009C  GETMET	R14	R14	K31
      0x7C380200,  //  009D  CALL	R14	1
      0x7C280800,  //  009E  CALL	R10	4
      0x8C28130A,  //  009F  GETMET	R10	R9	K10
      0x5830000E,  //  00A0  LDCONST	R12	K14
      0x88340B20,  //  00A1  GETMBR	R13	R5	K32
      0x5C381000,  //  00A2  MOVE	R14	R8
      0x7C280800,  //  00A3  CALL	R10	4
      0x8C28130A,  //  00A4  GETMET	R10	R9	K10
      0x58300010,  //  00A5  LDCONST	R12	K16
      0x88340B21,  //  00A6  GETMBR	R13	R5	K33
      0xB83A4400,  //  00A7  GETNGBL	R14	K34
      0x8C381D23,  //  00A8  GETMET	R14	R14	K35
      0x7C380200,  //  00A9  CALL	R14	1
      0x7C280800,  //  00AA  CALL	R10	4
      0x8C281324,  //  00AB  GETMET	R10	R9	K36
      0x7C280200,  //  00AC  CALL	R10	1
      0x8C2C0325,  //  00AD  GETMET	R11	R1	K37
      0x7C2C0200,  //  00AE  CALL	R11	1
      0x0030140B,  //  00AF  ADD	R12	R10	R11
      0x8C340926,  //  00B0  GETMET	R13	R4	K38
      0x7C340200,  //  00B1  CALL	R13	1
      0x8C341B27,  //  00B2  GETMET	R13	R13	K39
      0xB83E0200,  //  00B3  GETNGBL	R15	K1
      0x8C3C1F28,  //  00B4  GETMET	R15	R15	K40
      0x7C3C0200,  //  00B5  CALL	R15	1
      0x5C401800,  //  00B6  MOVE	R16	R12
      0x7C340600,  //  00B7  CALL	R13	3
      0x8C380B09,  //  00B8  GETMET	R14	R5	K9
      0x7C380200,  //  00B9  CALL	R14	1
      0x8C3C1D0A,  //  00BA  GETMET	R15	R14	K10
      0x58440005,  //  00BB  LDCONST	R17	K5
      0x88480B1C,  //  00BC  GETMBR	R18	R5	K28
      0x5C4C1400,  //  00BD  MOVE	R19	R10
      0x7C3C0800,  //  00BE  CALL	R15	4
      0x8C3C1D0A,  //  00BF  GETMET	R15	R14	K10
      0x58440007,  //  00C0  LDCONST	R17	K7
      0x88480B20,  //  00C1  GETMBR	R18	R5	K32
      0x5C4C1A00,  //  00C2  MOVE	R19	R13
      0x7C3C0800,  //  00C3  CALL	R15	4
      0x900E0907,  //  00C4  SETMBR	R3	K4	K7
      0x80041C00,  //  00C5  RET	1	R14
      0x70020161,  //  00C6  JMP		#0229
      0x54220003,  //  00C7  LDINT	R8	4
      0x1C200E08,  //  00C8  EQ	R8	R7	R8
      0x7822003C,  //  00C9  JMPF	R8	#0107
      0x8C200111,  //  00CA  GETMET	R8	R0	K17
      0x5C280600,  //  00CB  MOVE	R10	R3
      0x7C200400,  //  00CC  CALL	R8	2
      0x8C200506,  //  00CD  GETMET	R8	R2	K6
      0x58280005,  //  00CE  LDCONST	R10	K5
      0x7C200400,  //  00CF  CALL	R8	2
      0x6024000C,  //  00D0  GETGBL	R9	G12
      0x5C281000,  //  00D1  MOVE	R10	R8
      0x7C240200,  //  00D2  CALL	R9	1
      0x542A001F,  //  00D3  LDINT	R10	32
      0x2024120A,  //  00D4  NE	R9	R9	R10
      0x78260001,  //  00D5  JMPF	R9	#00D8
      0x4C240000,  //  00D6  LDNIL	R9
      0x80041200,  //  00D7  RET	1	R9
      0x8C240506,  //  00D8  GETMET	R9	R2	K6
      0x582C0007,  //  00D9  LDCONST	R11	K7
      0x50300000,  //  00DA  LDBOOL	R12	0	0
      0x7C240600,  //  00DB  CALL	R9	3
      0x8C280329,  //  00DC  GETMET	R10	R1	K41
      0x7C280200,  //  00DD  CALL	R10	1
      0x8C2C0B09,  //  00DE  GETMET	R11	R5	K9
      0x7C2C0200,  //  00DF  CALL	R11	1
      0x8C30170A,  //  00E0  GETMET	R12	R11	K10
      0x58380007,  //  00E1  LDCONST	R14	K7
      0x883C0B1C,  //  00E2  GETMBR	R15	R5	K28
      0x5C401400,  //  00E3  MOVE	R16	R10
      0x7C300800,  //  00E4  CALL	R12	4
      0x8C30170A,  //  00E5  GETMET	R12	R11	K10
      0x5838000E,  //  00E6  LDCONST	R14	K14
      0x883C0B20,  //  00E7  GETMBR	R15	R5	K32
      0x5C401000,  //  00E8  MOVE	R16	R8
      0x7C300800,  //  00E9  CALL	R12	4
      0x8C301724,  //  00EA  GETMET	R12	R11	K36
      0x7C300200,  //  00EB  CALL	R12	1
      0x8C340325,  //  00EC  GETMET	R13	R1	K37
      0x7C340200,  //  00ED  CALL	R13	1
      0x0034180D,  //  00EE  ADD	R13	R12	R13
      0x8C380926,  //  00EF  GETMET	R14	R4	K38
      0x7C380200,  //  00F0  CALL	R14	1
      0x8C381D27,  //  00F1  GETMET	R14	R14	K39
      0xB8420200,  //  00F2  GETNGBL	R16	K1
      0x8C402128,  //  00F3  GETMET	R16	R16	K40
      0x7C400200,  //  00F4  CALL	R16	1
      0x5C441A00,  //  00F5  MOVE	R17	R13
      0x7C380600,  //  00F6  CALL	R14	3
      0x8C3C0B09,  //  00F7  GETMET	R15	R5	K9
      0x7C3C0200,  //  00F8  CALL	R15	1
      0x8C401F0A,  //  00F9  GETMET	R16	R15	K10
      0x58480005,  //  00FA  LDCONST	R18	K5
      0x884C0B1C,  //  00FB  GETMBR	R19	R5	K28
      0x5C501800,  //  00FC  MOVE	R20	R12
      0x7C400800,  //  00FD  CALL	R16	4
      0x8C401F0A,  //  00FE  GETMET	R16	R15	K10
      0x58480007,  //  00FF  LDCONST	R18	K7
      0x884C0B20,  //  0100  GETMBR	R19	R5	K32
      0x5C501C00,  //  0101  MOVE	R20	R14
      0x7C400800,  //  0102  CALL	R16	4
      0x54420004,  //  0103  LDINT	R16	5
      0x900E0810,  //  0104  SETMBR	R3	K4	R16
      0x80041E00,  //  0105  RET	1	R15
      0x70020121,  //  0106  JMP		#0229
      0x5422000A,  //  0107  LDINT	R8	11
      0x1C200E08,  //  0108  EQ	R8	R7	R8
      0x7822000B,  //  0109  JMPF	R8	#0116
      0x8C200506,  //  010A  GETMET	R8	R2	K6
      0x58280005,  //  010B  LDCONST	R10	K5
      0x7C200400,  //  010C  CALL	R8	2
      0x8C24032A,  //  010D  GETMET	R9	R1	K42
      0x5C2C1000,  //  010E  MOVE	R11	R8
      0x7C240400,  //  010F  CALL	R9	2
      0xB8260200,  //  0110  GETNGBL	R9	K1
      0x8824132B,  //  0111  GETMBR	R9	R9	K43
      0x900E3409,  //  0112  SETMBR	R3	K26	R9
      0x4C240000,  //  0113  LDNIL	R9
      0x80041200,  //  0114  RET	1	R9
      0x70020112,  //  0115  JMP		#0229
      0x54220005,  //  0116  LDINT	R8	6
      0x1C200E08,  //  0117  EQ	R8	R7	R8
      0x782200B8,  //  0118  JMPF	R8	#01D2
      0xB8224400,  //  0119  GETNGBL	R8	K34
      0x8C20112C,  //  011A  GETMET	R8	R8	K44
      0x60280008,  //  011B  GETGBL	R10	G8
      0x5C2C0400,  //  011C  MOVE	R11	R2
      0x7C280200,  //  011D  CALL	R10	1
      0x002A5A0A,  //  011E  ADD	R10	K45	R10
      0x542E0003,  //  011F  LDINT	R11	4
      0x7C200600,  //  0120  CALL	R8	3
      0x8C200506,  //  0121  GETMET	R8	R2	K6
      0x58280005,  //  0122  LDCONST	R10	K5
      0x7C200400,  //  0123  CALL	R8	2
      0x8C240506,  //  0124  GETMET	R9	R2	K6
      0x582C0007,  //  0125  LDCONST	R11	K7
      0x7C240400,  //  0126  CALL	R9	2
      0x6028000C,  //  0127  GETGBL	R10	G12
      0x5C2C1200,  //  0128  MOVE	R11	R9
      0x7C280200,  //  0129  CALL	R10	1
      0x1C281505,  //  012A  EQ	R10	R10	K5
      0x782A0000,  //  012B  JMPF	R10	#012D
      0x4C240000,  //  012C  LDNIL	R9
      0x8C280506,  //  012D  GETMET	R10	R2	K6
      0x5830000E,  //  012E  LDCONST	R12	K14
      0x7C280400,  //  012F  CALL	R10	2
      0x8C2C0506,  //  0130  GETMET	R11	R2	K6
      0x58340010,  //  0131  LDCONST	R13	K16
      0x7C2C0400,  //  0132  CALL	R11	2
      0x8C300506,  //  0133  GETMET	R12	R2	K6
      0x543A0003,  //  0134  LDINT	R14	4
      0x7C300400,  //  0135  CALL	R12	2
      0x8C34032E,  //  0136  GETMET	R13	R1	K46
      0x7C340200,  //  0137  CALL	R13	1
      0x4C380000,  //  0138  LDNIL	R14
      0x1C341A0E,  //  0139  EQ	R13	R13	R14
      0x78360006,  //  013A  JMPF	R13	#0142
      0xB8364400,  //  013B  GETNGBL	R13	K34
      0x8C341B2C,  //  013C  GETMET	R13	R13	K44
      0x583C002F,  //  013D  LDCONST	R15	K47
      0x5840000E,  //  013E  LDCONST	R16	K14
      0x7C340600,  //  013F  CALL	R13	3
      0x4C340000,  //  0140  LDNIL	R13
      0x80041A00,  //  0141  RET	1	R13
      0x88340116,  //  0142  GETMBR	R13	R0	K22
      0x88341B30,  //  0143  GETMBR	R13	R13	K48
      0x8C341B31,  //  0144  GETMET	R13	R13	K49
      0x7C340200,  //  0145  CALL	R13	1
      0x8C381B32,  //  0146  GETMET	R14	R13	K50
      0x8C40032E,  //  0147  GETMET	R16	R1	K46
      0x7C400200,  //  0148  CALL	R16	1
      0x7C380400,  //  0149  CALL	R14	2
      0x8C381B33,  //  014A  GETMET	R14	R13	K51
      0x5C401000,  //  014B  MOVE	R16	R8
      0x5C441200,  //  014C  MOVE	R17	R9
      0x7C380600,  //  014D  CALL	R14	3
      0x8C381B34,  //  014E  GETMET	R14	R13	K52
      0x5C401400,  //  014F  MOVE	R16	R10
      0x7C380400,  //  0150  CALL	R14	2
      0x8C381B35,  //  0151  GETMET	R14	R13	K53
      0x5C401600,  //  0152  MOVE	R16	R11
      0x5C441800,  //  0153  MOVE	R17	R12
      0x7C380600,  //  0154  CALL	R14	3
      0x8C381B36,  //  0155  GETMET	R14	R13	K54
      0x8C400337,  //  0156  GETMET	R16	R1	K55
      0x7C400200,  //  0157  CALL	R16	1
      0x7C380400,  //  0158  CALL	R14	2
      0xB83A0200,  //  0159  GETNGBL	R14	K1
      0x88381D02,  //  015A  GETMBR	R14	R14	K2
      0x8C381D38,  //  015B  GETMET	R14	R14	K56
      0x5C401000,  //  015C  MOVE	R16	R8
      0x7C380400,  //  015D  CALL	R14	2
      0x8C3C1D39,  //  015E  GETMET	R15	R14	K57
      0x54460005,  //  015F  LDINT	R17	6
      0x7C3C0400,  //  0160  CALL	R15	2
      0x8C401F06,  //  0161  GETMET	R16	R15	K6
      0x544A0014,  //  0162  LDINT	R18	21
      0x7C400400,  //  0163  CALL	R16	2
      0x8C441F06,  //  0164  GETMET	R17	R15	K6
      0x544E0010,  //  0165  LDINT	R19	17
      0x7C440400,  //  0166  CALL	R17	2
      0x5C482000,  //  0167  MOVE	R18	R16
      0x784A0001,  //  0168  JMPF	R18	#016B
      0x5C482200,  //  0169  MOVE	R18	R17
      0x744A0006,  //  016A  JMPT	R18	#0172
      0xB84A4400,  //  016B  GETNGBL	R18	K34
      0x8C48252C,  //  016C  GETMET	R18	R18	K44
      0x5850003A,  //  016D  LDCONST	R20	K58
      0x5854000E,  //  016E  LDCONST	R21	K14
      0x7C480600,  //  016F  CALL	R18	3
      0x50480000,  //  0170  LDBOOL	R18	0	0
      0x80042400,  //  0171  RET	1	R18
      0x60480004,  //  0172  GETGBL	R18	G4
      0x5C4C2000,  //  0173  MOVE	R19	R16
      0x7C480200,  //  0174  CALL	R18	1
      0x1C48253B,  //  0175  EQ	R18	R18	K59
      0x784A0007,  //  0176  JMPF	R18	#017F
      0xB84A7800,  //  0177  GETNGBL	R18	K60
      0x8C48253D,  //  0178  GETMET	R18	R18	K61
      0x5C502000,  //  0179  MOVE	R20	R16
      0x7C480400,  //  017A  CALL	R18	2
      0x8C48253E,  //  017B  GETMET	R18	R18	K62
      0x7C480200,  //  017C  CALL	R18	1
      0x5C402400,  //  017D  MOVE	R16	R18
      0x70020002,  //  017E  JMP		#0182
      0x8C48213E,  //  017F  GETMET	R18	R16	K62
      0x7C480200,  //  0180  CALL	R18	1
      0x5C402400,  //  0181  MOVE	R16	R18
      0x60480004,  //  0182  GETGBL	R18	G4
      0x5C4C2200,  //  0183  MOVE	R19	R17
      0x7C480200,  //  0184  CALL	R18	1
      0x1C48253B,  //  0185  EQ	R18	R18	K59
      0x784A0007,  //  0186  JMPF	R18	#018F
      0xB84A7800,  //  0187  GETNGBL	R18	K60
      0x8C48253D,  //  0188  GETMET	R18	R18	K61
      0x5C502200,  //  0189  MOVE	R20	R17
      0x7C480400,  //  018A  CALL	R18	2
      0x8C48253E,  //  018B  GETMET	R18	R18	K62
      0x7C480200,  //  018C  CALL	R18	1
      0x5C442400,  //  018D  MOVE	R17	R18
      0x70020002,  //  018E  JMP		#0192
      0x8C48233E,  //  018F  GETMET	R18	R17	K62
      0x7C480200,  //  0190  CALL	R18	1
      0x5C442400,  //  0191  MOVE	R17	R18
      0x8C48033F,  //  0192  GETMET	R18	R1	K63
      0x7C480200,  //  0193  CALL	R18	1
      0x404E0F40,  //  0194  CONNECT	R19	K7	K64
      0x94482413,  //  0195  GETIDX	R18	R18	R19
      0x604C0015,  //  0196  GETGBL	R19	G21
      0x7C4C0000,  //  0197  CALL	R19	0
      0x8C4C2741,  //  0198  GETMET	R19	R19	K65
      0x58540042,  //  0199  LDCONST	R21	K66
      0x7C4C0400,  //  019A  CALL	R19	2
      0x8C500943,  //  019B  GETMET	R20	R4	K67
      0x7C500200,  //  019C  CALL	R20	1
      0x8C542144,  //  019D  GETMET	R21	R16	K68
      0x7C540200,  //  019E  CALL	R21	1
      0x8C542B45,  //  019F  GETMET	R21	R21	K69
      0x7C540200,  //  01A0  CALL	R21	1
      0x8C582946,  //  01A1  GETMET	R22	R20	K70
      0x5C602400,  //  01A2  MOVE	R24	R18
      0x5C642A00,  //  01A3  MOVE	R25	R21
      0x5C682600,  //  01A4  MOVE	R26	R19
      0x546E0007,  //  01A5  LDINT	R27	8
      0x7C580A00,  //  01A6  CALL	R22	5
      0x885C0312,  //  01A7  GETMBR	R23	R1	K18
      0x785E0001,  //  01A8  JMPF	R23	#01AB
      0x885C0312,  //  01A9  GETMBR	R23	R1	K18
      0x70020001,  //  01AA  JMP		#01AD
      0x885C0116,  //  01AB  GETMBR	R23	R0	K22
      0x885C2F47,  //  01AC  GETMBR	R23	R23	K71
      0x8C601B48,  //  01AD  GETMET	R24	R13	K72
      0x5C682000,  //  01AE  MOVE	R26	R16
      0x5C6C2200,  //  01AF  MOVE	R27	R17
      0x5C702C00,  //  01B0  MOVE	R28	R22
      0x5C742E00,  //  01B1  MOVE	R29	R23
      0x7C600A00,  //  01B2  CALL	R24	5
      0x8C601B49,  //  01B3  GETMET	R24	R13	K73
      0x7C600200,  //  01B4  CALL	R24	1
      0x88600116,  //  01B5  GETMBR	R24	R0	K22
      0x8C60314A,  //  01B6  GETMET	R24	R24	K74
      0x5C681A00,  //  01B7  MOVE	R26	R13
      0x7C600400,  //  01B8  CALL	R24	2
      0x8C60034B,  //  01B9  GETMET	R24	R1	K75
      0x7C600200,  //  01BA  CALL	R24	1
      0x78620002,  //  01BB  JMPF	R24	#01BF
      0x8C60034C,  //  01BC  GETMET	R24	R1	K76
      0x546A003B,  //  01BD  LDINT	R26	60
      0x7C600400,  //  01BE  CALL	R24	2
      0x8C601B4D,  //  01BF  GETMET	R24	R13	K77
      0x7C600200,  //  01C0  CALL	R24	1
      0x8C600B09,  //  01C1  GETMET	R24	R5	K9
      0x7C600200,  //  01C2  CALL	R24	1
      0x8C64310A,  //  01C3  GETMET	R25	R24	K10
      0x586C0005,  //  01C4  LDCONST	R27	K5
      0x88700B0B,  //  01C5  GETMBR	R28	R5	K11
      0xB8760200,  //  01C6  GETNGBL	R29	K1
      0x88743B2B,  //  01C7  GETMBR	R29	R29	K43
      0x7C640800,  //  01C8  CALL	R25	4
      0x8C64310A,  //  01C9  GETMET	R25	R24	K10
      0x586C0007,  //  01CA  LDCONST	R27	K7
      0x88700B0B,  //  01CB  GETMBR	R28	R5	K11
      0x58740007,  //  01CC  LDCONST	R29	K7
      0x7C640800,  //  01CD  CALL	R25	4
      0x54660007,  //  01CE  LDINT	R25	8
      0x900E0819,  //  01CF  SETMBR	R3	K4	R25
      0x80043000,  //  01D0  RET	1	R24
      0x70020056,  //  01D1  JMP		#0229
      0x54220008,  //  01D2  LDINT	R8	9
      0x1C200E08,  //  01D3  EQ	R8	R7	R8
      0x7822001E,  //  01D4  JMPF	R8	#01F4
      0x8C200506,  //  01D5  GETMET	R8	R2	K6
      0x58280005,  //  01D6  LDCONST	R10	K5
      0x7C200400,  //  01D7  CALL	R8	2
      0x8C24034E,  //  01D8  GETMET	R9	R1	K78
      0x5C2C1000,  //  01D9  MOVE	R11	R8
      0x7C240400,  //  01DA  CALL	R9	2
      0xB8264400,  //  01DB  GETNGBL	R9	K34
      0x8C24132C,  //  01DC  GETMET	R9	R9	K44
      0x602C0018,  //  01DD  GETGBL	R11	G24
      0x5830004F,  //  01DE  LDCONST	R12	K79
      0x88340312,  //  01DF  GETMBR	R13	R1	K18
      0x8C341B50,  //  01E0  GETMET	R13	R13	K80
      0x7C340200,  //  01E1  CALL	R13	1
      0x8C341B44,  //  01E2  GETMET	R13	R13	K68
      0x7C340200,  //  01E3  CALL	R13	1
      0x8C341B45,  //  01E4  GETMET	R13	R13	K69
      0x7C340200,  //  01E5  CALL	R13	1
      0x8C341B51,  //  01E6  GETMET	R13	R13	K81
      0x7C340200,  //  01E7  CALL	R13	1
      0x60380008,  //  01E8  GETGBL	R14	G8
      0x5C3C1000,  //  01E9  MOVE	R15	R8
      0x7C380200,  //  01EA  CALL	R14	1
      0x7C2C0600,  //  01EB  CALL	R11	3
      0x58300010,  //  01EC  LDCONST	R12	K16
      0x7C240600,  //  01ED  CALL	R9	3
      0xB8260200,  //  01EE  GETNGBL	R9	K1
      0x8824132B,  //  01EF  GETMBR	R9	R9	K43
      0x900E3409,  //  01F0  SETMBR	R3	K26	R9
      0x4C240000,  //  01F1  LDNIL	R9
      0x80041200,  //  01F2  RET	1	R9
      0x70020034,  //  01F3  JMP		#0229
      0x54220009,  //  01F4  LDINT	R8	10
      0x1C200E08,  //  01F5  EQ	R8	R7	R8
      0x78220031,  //  01F6  JMPF	R8	#0229
      0x8C200506,  //  01F7  GETMET	R8	R2	K6
      0x58280005,  //  01F8  LDCONST	R10	K5
      0x7C200400,  //  01F9  CALL	R8	2
      0x60240008,  //  01FA  GETGBL	R9	G8
      0x5C281000,  //  01FB  MOVE	R10	R8
      0x7C240200,  //  01FC  CALL	R9	1
      0x0026A409,  //  01FD  ADD	R9	K82	R9
      0x900E5809,  //  01FE  SETMBR	R3	K44	R9
      0x60240010,  //  01FF  GETGBL	R9	G16
      0x88280116,  //  0200  GETMBR	R10	R0	K22
      0x88281530,  //  0201  GETMBR	R10	R10	K48
      0x8C281553,  //  0202  GETMET	R10	R10	K83
      0x7C280200,  //  0203  CALL	R10	1
      0x7C240200,  //  0204  CALL	R9	1
      0xA8020010,  //  0205  EXBLK	0	#0217
      0x5C281200,  //  0206  MOVE	R10	R9
      0x7C280000,  //  0207  CALL	R10	0
      0x8C2C1554,  //  0208  GETMET	R11	R10	K84
      0x7C2C0200,  //  0209  CALL	R11	1
      0x1C2C1608,  //  020A  EQ	R11	R11	R8
      0x782E0008,  //  020B  JMPF	R11	#0215
      0xB82E4400,  //  020C  GETNGBL	R11	K34
      0x8C2C1755,  //  020D  GETMET	R11	R11	K85
      0x543607CF,  //  020E  LDINT	R13	2000
      0x84380000,  //  020F  CLOSURE	R14	P0
      0x7C2C0600,  //  0210  CALL	R11	3
      0x502C0200,  //  0211  LDBOOL	R11	1	0
      0xA0000000,  //  0212  CLOSE	R0
      0xA8040001,  //  0213  EXBLK	1	1
      0x80041600,  //  0214  RET	1	R11
      0xA0240000,  //  0215  CLOSE	R9
      0x7001FFEE,  //  0216  JMP		#0206
      0x58240056,  //  0217  LDCONST	R9	K86
      0xAC240200,  //  0218  CATCH	R9	1	0
      0xB0080000,  //  0219  RAISE	2	R0	R0
      0xB8264400,  //  021A  GETNGBL	R9	K34
      0x8C24132C,  //  021B  GETMET	R9	R9	K44
      0x602C0008,  //  021C  GETGBL	R11	G8
      0x5C301000,  //  021D  MOVE	R12	R8
      0x7C2C0200,  //  021E  CALL	R11	1
      0x002EAE0B,  //  021F  ADD	R11	K87	R11
      0x002C1758,  //  0220  ADD	R11	R11	K88
      0x5830000E,  //  0221  LDCONST	R12	K14
      0x7C240600,  //  0222  CALL	R9	3
      0xB8260200,  //  0223  GETNGBL	R9	K1
      0x88241359,  //  0224  GETMBR	R9	R9	K89
      0x900E3409,  //  0225  SETMBR	R3	K26	R9
      0x4C240000,  //  0226  LDNIL	R9
      0xA0000000,  //  0227  CLOSE	R0
      0x80041200,  //  0228  RET	1	R9
      0x7002009B,  //  0229  JMP		#02C6
      0x5422003B,  //  022A  LDINT	R8	60
      0x1C200C08,  //  022B  EQ	R8	R6	R8
      0x78220085,  //  022C  JMPF	R8	#02B3
      0x1C200F05,  //  022D  EQ	R8	R7	K5
      0x78220065,  //  022E  JMPF	R8	#0295
      0x8C200506,  //  022F  GETMET	R8	R2	K6
      0x58280005,  //  0230  LDCONST	R10	K5
      0x7C200400,  //  0231  CALL	R8	2
      0x8C240506,  //  0232  GETMET	R9	R2	K6
      0x582C0007,  //  0233  LDCONST	R11	K7
      0x7C240400,  //  0234  CALL	R9	2
      0x8C280506,  //  0235  GETMET	R10	R2	K6
      0x5830000E,  //  0236  LDCONST	R12	K14
      0x7C280400,  //  0237  CALL	R10	2
      0x8C2C0506,  //  0238  GETMET	R11	R2	K6
      0x58340010,  //  0239  LDCONST	R13	K16
      0x7C2C0400,  //  023A  CALL	R11	2
      0x8C300506,  //  023B  GETMET	R12	R2	K6
      0x543A0003,  //  023C  LDINT	R14	4
      0x7C300400,  //  023D  CALL	R12	2
      0xB8364400,  //  023E  GETNGBL	R13	K34
      0x8C341B2C,  //  023F  GETMET	R13	R13	K44
      0x603C0018,  //  0240  GETGBL	R15	G24
      0x5840005A,  //  0241  LDCONST	R16	K90
      0x5C441000,  //  0242  MOVE	R17	R8
      0x8C481351,  //  0243  GETMET	R18	R9	K81
      0x7C480200,  //  0244  CALL	R18	1
      0x5C4C1400,  //  0245  MOVE	R19	R10
      0x5C501600,  //  0246  MOVE	R20	R11
      0x8C541951,  //  0247  GETMET	R21	R12	K81
      0x7C540200,  //  0248  CALL	R21	1
      0x7C3C0C00,  //  0249  CALL	R15	6
      0x54420003,  //  024A  LDINT	R16	4
      0x7C340600,  //  024B  CALL	R13	3
      0x4C340000,  //  024C  LDNIL	R13
      0x1C34100D,  //  024D  EQ	R13	R8	R13
      0x7436000B,  //  024E  JMPT	R13	#025B
      0x4C340000,  //  024F  LDNIL	R13
      0x1C34120D,  //  0250  EQ	R13	R9	R13
      0x74360008,  //  0251  JMPT	R13	#025B
      0x4C340000,  //  0252  LDNIL	R13
      0x1C34140D,  //  0253  EQ	R13	R10	R13
      0x74360005,  //  0254  JMPT	R13	#025B
      0x4C340000,  //  0255  LDNIL	R13
      0x1C34160D,  //  0256  EQ	R13	R11	R13
      0x74360002,  //  0257  JMPT	R13	#025B
      0x4C340000,  //  0258  LDNIL	R13
      0x1C34180D,  //  0259  EQ	R13	R12	R13
      0x78360005,  //  025A  JMPF	R13	#0261
      0xB8360200,  //  025B  GETNGBL	R13	K1
      0x88341B5B,  //  025C  GETMBR	R13	R13	K91
      0x900E340D,  //  025D  SETMBR	R3	K26	R13
      0x4C340000,  //  025E  LDNIL	R13
      0xA0000000,  //  025F  CLOSE	R0
      0x80041A00,  //  0260  RET	1	R13
      0x6034000C,  //  0261  GETGBL	R13	G12
      0x5C381200,  //  0262  MOVE	R14	R9
      0x7C340200,  //  0263  CALL	R13	1
      0x543A001F,  //  0264  LDINT	R14	32
      0x543E0040,  //  0265  LDINT	R15	65
      0x00381C0F,  //  0266  ADD	R14	R14	R15
      0x20341A0E,  //  0267  NE	R13	R13	R14
      0x7436000B,  //  0268  JMPT	R13	#0275
      0x6034000C,  //  0269  GETGBL	R13	G12
      0x5C381800,  //  026A  MOVE	R14	R12
      0x7C340200,  //  026B  CALL	R13	1
      0x543A000F,  //  026C  LDINT	R14	16
      0x14341A0E,  //  026D  LT	R13	R13	R14
      0x74360005,  //  026E  JMPT	R13	#0275
      0x6034000C,  //  026F  GETGBL	R13	G12
      0x5C381800,  //  0270  MOVE	R14	R12
      0x7C340200,  //  0271  CALL	R13	1
      0x543A001F,  //  0272  LDINT	R14	32
      0x24341A0E,  //  0273  GT	R13	R13	R14
      0x7836000A,  //  0274  JMPF	R13	#0280
      0xB8364400,  //  0275  GETNGBL	R13	K34
      0x8C341B2C,  //  0276  GETMET	R13	R13	K44
      0x583C005C,  //  0277  LDCONST	R15	K92
      0x5840000E,  //  0278  LDCONST	R16	K14
      0x7C340600,  //  0279  CALL	R13	3
      0xB8360200,  //  027A  GETNGBL	R13	K1
      0x88341B5D,  //  027B  GETMBR	R13	R13	K93
      0x900E340D,  //  027C  SETMBR	R3	K26	R13
      0x4C340000,  //  027D  LDNIL	R13
      0xA0000000,  //  027E  CLOSE	R0
      0x80041A00,  //  027F  RET	1	R13
      0x5436001E,  //  0280  LDINT	R13	31
      0x40360A0D,  //  0281  CONNECT	R13	K5	R13
      0x9434120D,  //  0282  GETIDX	R13	R9	R13
      0x543A001F,  //  0283  LDINT	R14	32
      0x40381D40,  //  0284  CONNECT	R14	R14	K64
      0x9438120E,  //  0285  GETIDX	R14	R9	R14
      0x883C0116,  //  0286  GETMBR	R15	R0	K22
      0x8C3C1F5E,  //  0287  GETMET	R15	R15	K94
      0x5C441000,  //  0288  MOVE	R17	R8
      0x5C481600,  //  0289  MOVE	R18	R11
      0x5C4C1400,  //  028A  MOVE	R19	R10
      0x5C501800,  //  028B  MOVE	R20	R12
      0x5C541A00,  //  028C  MOVE	R21	R13
      0x5C581C00,  //  028D  MOVE	R22	R14
      0x8C5C035F,  //  028E  GETMET	R23	R1	K95
      0x7C5C0200,  //  028F  CALL	R23	1
      0x7C3C1000,  //  0290  CALL	R15	8
      0x503C0200,  //  0291  LDBOOL	R15	1	0
      0xA0000000,  //  0292  CLOSE	R0
      0x80041E00,  //  0293  RET	1	R15
      0x7002001C,  //  0294  JMP		#02B2
      0x1C200F07,  //  0295  EQ	R8	R7	K7
      0x78220012,  //  0296  JMPF	R8	#02AA
      0x8C200506,  //  0297  GETMET	R8	R2	K6
      0x58280005,  //  0298  LDCONST	R10	K5
      0x7C200400,  //  0299  CALL	R8	2
      0xB8264400,  //  029A  GETNGBL	R9	K34
      0x8C24132C,  //  029B  GETMET	R9	R9	K44
      0x602C0008,  //  029C  GETGBL	R11	G8
      0x5C301000,  //  029D  MOVE	R12	R8
      0x7C2C0200,  //  029E  CALL	R11	1
      0x002EC00B,  //  029F  ADD	R11	K96	R11
      0x58300010,  //  02A0  LDCONST	R12	K16
      0x7C240600,  //  02A1  CALL	R9	3
      0x88240116,  //  02A2  GETMBR	R9	R0	K22
      0x8C241361,  //  02A3  GETMET	R9	R9	K97
      0x5C2C1000,  //  02A4  MOVE	R11	R8
      0x7C240400,  //  02A5  CALL	R9	2
      0x50240200,  //  02A6  LDBOOL	R9	1	0
      0xA0000000,  //  02A7  CLOSE	R0
      0x80041200,  //  02A8  RET	1	R9
      0x70020007,  //  02A9  JMP		#02B2
      0x1C200F0E,  //  02AA  EQ	R8	R7	K14
      0x78220005,  //  02AB  JMPF	R8	#02B2
      0x88200116,  //  02AC  GETMBR	R8	R0	K22
      0x8C201162,  //  02AD  GETMET	R8	R8	K98
      0x7C200200,  //  02AE  CALL	R8	1
      0x50200200,  //  02AF  LDBOOL	R8	1	0
      0xA0000000,  //  02B0  CLOSE	R0
      0x80041000,  //  02B1  RET	1	R8
      0x70020012,  //  02B2  JMP		#02C6
      0x54220029,  //  02B3  LDINT	R8	42
      0x1C200C08,  //  02B4  EQ	R8	R6	R8
      0x78220005,  //  02B5  JMPF	R8	#02BC
      0x1C200F05,  //  02B6  EQ	R8	R7	K5
      0x78220002,  //  02B7  JMPF	R8	#02BB
      0x50200200,  //  02B8  LDBOOL	R8	1	0
      0xA0000000,  //  02B9  CLOSE	R0
      0x80041000,  //  02BA  RET	1	R8
      0x70020009,  //  02BB  JMP		#02C6
      0x60200003,  //  02BC  GETGBL	R8	G3
      0x5C240000,  //  02BD  MOVE	R9	R0
      0x7C200200,  //  02BE  CALL	R8	1
      0x8C201163,  //  02BF  GETMET	R8	R8	K99
      0x5C280200,  //  02C0  MOVE	R10	R1
      0x5C2C0400,  //  02C1  MOVE	R11	R2
      0x5C300600,  //  02C2  MOVE	R12	R3
      0x7C200800,  //  02C3  CALL	R8	4
      0xA0000000,  //  02C4  CLOSE	R0
      0x80041000,  //  02C5  RET	1	R8
      0xA0000000,  //  02C6  CLOSE	R0
      0x80000000,  //  02C7  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Root
********************************************************************/
extern const bclass be_class_Matter_Plugin;
be_local_class(Matter_Plugin_Root,
    0,
    &be_class_Matter_Plugin,
    be_nested_map(7,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(read_attribute, 1), be_const_closure(Matter_Plugin_Root_read_attribute_closure) },
        { be_const_key_weak(invoke_request, 6), be_const_closure(Matter_Plugin_Root_invoke_request_closure) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(root) },
        { be_const_key_weak(TYPES, 2), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(22, -1), be_const_int(1) },
    }))    ) } )) },
        { be_const_key_weak(write_attribute, -1), be_const_closure(Matter_Plugin_Root_write_attribute_closure) },
        { be_const_key_weak(DISPLAY_NAME, -1), be_nested_str_weak(Root_X20node) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(15,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(60, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
    }))    ) } )) },
        { be_const_key_int(31, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(4,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
    }))    ) } )) },
        { be_const_key_int(62, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(6,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
    }))    ) } )) },
        { be_const_key_int(48, 9), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(5,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
    }))    ) } )) },
        { be_const_key_int(49, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(3),
        be_const_int(4),
        be_const_int(65532),
    }))    ) } )) },
        { be_const_key_int(50, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(0,
    ( (struct bvalue*) &(const bvalue[]) {
    }))    ) } )) },
        { be_const_key_int(51, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(4,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(8),
    }))    ) } )) },
        { be_const_key_int(52, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(0,
    ( (struct bvalue*) &(const bvalue[]) {
    }))    ) } )) },
        { be_const_key_int(29, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(6,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(63, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(0,
    ( (struct bvalue*) &(const bvalue[]) {
    }))    ) } )) },
        { be_const_key_int(40, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(15,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(6),
        be_const_int(7),
        be_const_int(8),
        be_const_int(9),
        be_const_int(10),
        be_const_int(15),
        be_const_int(17),
        be_const_int(18),
        be_const_int(19),
    }))    ) } )) },
        { be_const_key_int(56, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(7),
    }))    ) } )) },
        { be_const_key_int(57, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(1,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(17),
    }))    ) } )) },
        { be_const_key_int(43, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(2,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
    }))    ) } )) },
        { be_const_key_int(44, 8), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
    }))    ) } )) },
    }))    ) } )) },
    })),
    be_str_weak(Matter_Plugin_Root)
);
/*******************************************************************/

void be_load_Matter_Plugin_Root_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Root);
    be_setglobal(vm, "Matter_Plugin_Root");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
