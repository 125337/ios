@interface PBCMessageWrap : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _mesSvrId; // +0x8
    unsigned int _mesLocalId; // +0xc
    unsigned int _messageType; // +0x10
    unsigned int _status; // +0x14
    unsigned int _imgStatus; // +0x18
    unsigned int _downloadStatus; // +0x1c
    unsigned int _createTime; // +0x20
    unsigned int _isSenderStatus; // +0x24
    NSString * _fromUser; // +0x28
    NSString * _toUser; // +0x30
    NSString * _realChatUser; // +0x38
    NSString * _content; // +0x40
    long long _n64MesSvrId; // +0x48
    NSString * _msgSource; // +0x50
    NSString * _specifiedChatName; // +0x58
}
+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_messageType;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_imgStatus;
+ (void)PBArrayAdd_downloadStatus;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_realChatUser;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_n64MesSvrId;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_specifiedChatName;
+ (void)PBArrayAdd_isSenderStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)toCMessageWrap;
- (void)setFromCMessageWrap:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)mesSvrId;
- (void)setMesSvrId:(unsigned int)arg1;
- (unsigned int)mesLocalId;
- (void)setMesLocalId:(unsigned int)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)imgStatus;
- (void)setImgStatus:(unsigned int)arg1;
- (unsigned int)downloadStatus;
- (void)setDownloadStatus:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (id)toUser;
- (void)setToUser:(id)arg1;
- (id)realChatUser;
- (void)setRealChatUser:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)n64MesSvrId;
- (void)setN64MesSvrId:(long long)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (id)specifiedChatName;
- (void)setSpecifiedChatName:(id)arg1;
- (unsigned int)isSenderStatus;
- (void)setIsSenderStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
