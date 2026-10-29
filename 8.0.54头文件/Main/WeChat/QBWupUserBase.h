@interface QBWupUserBase : QBJceObjectV2
{
    BOOL jcev2_p_8_o_bSave; // +0x8
    short jcev2_p_13_o_iMCC; // +0xa
    short jcev2_p_14_o_iMNC; // +0xc
    int jcev2_p_7_o_iServerVer; // +0x10
    int jcev2_p_12_o_iLanguageType; // +0x14
    NSString * jcev2_p_0_r_sIMEI; // +0x18
    NSData * jcev2_p_1_r_sGUID; // +0x20
    NSString * jcev2_p_2_r_sQUA; // +0x28
    NSString * jcev2_p_3_r_sLC; // +0x30
    NSString * jcev2_p_4_r_sCellphone; // +0x38
    NSString * jcev2_p_5_r_sUin; // +0x40
    NSString * jcev2_p_6_o_sCellid; // +0x48
    NSString * jcev2_p_9_o_sChannel; // +0x50
    NSString * jcev2_p_10_o_sLAC; // +0x58
    NSString * jcev2_p_11_o_sUA; // +0x60
    NSString * jcev2_p_15_o_sAPN; // +0x68
    NSString * jcev2_p_16_o_sCellNumber; // +0x70
    NSData * jcev2_p_17_o_sMac; // +0x78
    NSArray * jcev2_p_19_o_vWifiMacs__b0x9i_VONSNumber; // +0x80
    NSData * jcev2_p_20_o_vLBSKeyData; // +0x88
    NSString * jcev2_p_21_o_sVenderId; // +0x90
    NSString * jcev2_p_22_o_sAdId; // +0x98
}
+ (void)initialize;
+ (id)jceType;
+ (id)commonUserBase;
- (id)init;
- (void).cxx_destruct;
- (id)sIMEI;
- (void)setSIMEI:(id)arg1;
- (id)sGUID;
- (void)setSGUID:(id)arg1;
- (id)sQUA;
- (void)setSQUA:(id)arg1;
- (id)sLC;
- (void)setSLC:(id)arg1;
- (id)sCellphone;
- (void)setSCellphone:(id)arg1;
- (id)sUin;
- (void)setSUin:(id)arg1;
- (id)sCellid;
- (void)setSCellid:(id)arg1;
- (int)iServerVer;
- (void)setIServerVer:(int)arg1;
- (BOOL)bSave;
- (void)setBSave:(BOOL)arg1;
- (id)sChannel;
- (void)setSChannel:(id)arg1;
- (id)sLAC;
- (void)setSLAC:(id)arg1;
- (id)sUA;
- (void)setSUA:(id)arg1;
- (int)iLanguageType;
- (void)setILanguageType:(int)arg1;
- (short)iMCC;
- (void)setIMCC:(short)arg1;
- (short)iMNC;
- (void)setIMNC:(short)arg1;
- (id)sAPN;
- (void)setSAPN:(id)arg1;
- (id)sCellNumber;
- (void)setSCellNumber:(id)arg1;
- (id)sMac;
- (void)setSMac:(id)arg1;
- (id)vWifiMacs;
- (void)setVWifiMacs:(id)arg1;
- (id)vLBSKeyData;
- (void)setVLBSKeyData:(id)arg1;
- (id)sVenderId;
- (void)setSVenderId:(id)arg1;
- (id)sAdId;
- (void)setSAdId:(id)arg1;
@end

