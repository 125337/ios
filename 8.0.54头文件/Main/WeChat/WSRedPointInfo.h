@interface WSRedPointInfo : NSObject <PBCoding>
{
    BOOL _bFFShowRedot; // +0x8
    BOOL _bCheckedExpired; // +0x9
    unsigned int _entranceShowRed; // +0xc
    unsigned int _clientVersion; // +0x10
    unsigned int _h5TemplateVersion; // +0x14
    unsigned int _expireTime; // +0x18
    unsigned int _redotType; // +0x1c
    unsigned int _redotTimeStamp; // +0x20
    unsigned int _recieveTime; // +0x24
    int _clear; // +0x28
    unsigned int _reddotCount; // +0x2c
    unsigned int _priority; // +0x30
    NSString * _msgid; // +0x38
    NSString * _reddotText; // +0x40
    NSString * _reddotIcon; // +0x48
    NSString * _extInfo; // +0x50
    unsigned long long _seq; // +0x58
    FinderSyncTipsShowInfo * _tipsShowInfo; // +0x60
}
+ (void)PBArrayAdd_msgid;
+ (void)PBArrayAdd_bFFShowRedot;
+ (void)PBArrayAdd_entranceShowRed;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_h5TemplateVersion;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_redotType;
+ (void)PBArrayAdd_reddotText;
+ (void)PBArrayAdd_reddotIcon;
+ (void)PBArrayAdd_redotTimeStamp;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_clear;
+ (void)PBArrayAdd_bCheckedExpired;
+ (void)PBArrayAdd_reddotCount;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_seq;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_tipsShowInfo;
+ (void)initialize;
+ (id)parseFromXmlNode:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (BOOL)isWeSeeContentReddotType;
- (BOOL)isWeSeeFirstColumnReddotType;
- (BOOL)isWeSeeSecondColumnReddotType;
- (BOOL)isWeSeeThirdColumnReddotType;
- (BOOL)isTimeStampValid;
- (unsigned long long)getVisionType;
- (BOOL)isActive;
- (BOOL)hasIcon;
- (BOOL)hasText;
- (long long)tabCategory;
- (id)description;
- (id)msgid;
- (void)setMsgid:(id)arg1;
- (BOOL)bFFShowRedot;
- (void)setBFFShowRedot:(BOOL)arg1;
- (unsigned int)entranceShowRed;
- (void)setEntranceShowRed:(unsigned int)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (unsigned int)h5TemplateVersion;
- (void)setH5TemplateVersion:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned int)redotType;
- (void)setRedotType:(unsigned int)arg1;
- (id)reddotText;
- (void)setReddotText:(id)arg1;
- (id)reddotIcon;
- (void)setReddotIcon:(id)arg1;
- (unsigned int)redotTimeStamp;
- (void)setRedotTimeStamp:(unsigned int)arg1;
- (unsigned int)recieveTime;
- (void)setRecieveTime:(unsigned int)arg1;
- (int)clear;
- (void)setClear:(int)arg1;
- (BOOL)bCheckedExpired;
- (void)setBCheckedExpired:(BOOL)arg1;
- (unsigned int)reddotCount;
- (void)setReddotCount:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (id)tipsShowInfo;
- (void)setTipsShowInfo:(id)arg1;
- (void).cxx_destruct;
@end

