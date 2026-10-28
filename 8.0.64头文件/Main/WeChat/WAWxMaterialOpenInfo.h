@interface WAWxMaterialOpenInfo : NSObject
{
    unsigned int _materialScene; // +0x8
    NSString * _appId; // +0x10
    NSString * _enterPath; // +0x18
    unsigned long long _debugType; // +0x20
    NSString * _fileExt; // +0x28
    NSString * _materialPath; // +0x30
    NSString * _materialName; // +0x38
    unsigned long long _materialSize; // +0x40
    NSString * _msgContent; // +0x48
    NSString * _fromUsername; // +0x50
    unsigned long long _msgLocalId; // +0x58
    unsigned long long _msgTimeStamp; // +0x60
    NSString * _chatUsername; // +0x68
    unsigned long long _chatType; // +0x70
    NSSet * _suffixSet; // +0x78
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (unsigned long long)debugType;
- (void)setDebugType:(unsigned long long)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)materialPath;
- (void)setMaterialPath:(id)arg1;
- (id)materialName;
- (void)setMaterialName:(id)arg1;
- (unsigned long long)materialSize;
- (void)setMaterialSize:(unsigned long long)arg1;
- (unsigned int)materialScene;
- (void)setMaterialScene:(unsigned int)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (unsigned long long)msgLocalId;
- (void)setMsgLocalId:(unsigned long long)arg1;
- (unsigned long long)msgTimeStamp;
- (void)setMsgTimeStamp:(unsigned long long)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned long long)chatType;
- (void)setChatType:(unsigned long long)arg1;
- (id)suffixSet;
- (void)setSuffixSet:(id)arg1;
- (void).cxx_destruct;
@end
