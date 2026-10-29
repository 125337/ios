@interface SendMessage : NSObject <PBCoding>
{
    BOOL _needCheckEasterEgg; // +0x8
    unsigned int _version; // +0xc
    unsigned int _msgLocalId; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _status; // +0x18
    unsigned int _imageStatus; // +0x1c
    unsigned int _type; // +0x20
    NSString * _userName; // +0x28
    NSString * _message; // +0x30
    NSString * _msgSource; // +0x38
}
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_imageStatus;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_needCheckEasterEgg;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)imageStatus;
- (void)setImageStatus:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (BOOL)needCheckEasterEgg;
- (void)setNeedCheckEasterEgg:(BOOL)arg1;
- (void).cxx_destruct;
@end

