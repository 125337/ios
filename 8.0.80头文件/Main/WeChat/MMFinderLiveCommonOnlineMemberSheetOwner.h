@interface MMFinderLiveCommonOnlineMemberSheetOwner : NSObject
{
    unsigned int _boardType; // +0x8
    NSString * _boardKey; // +0x10
    NSString * _ownerName; // +0x18
    NSString * _micId; // +0x20
}
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (id)ownerName;
- (void)setOwnerName:(id)arg1;
- (id)micId;
- (void)setMicId:(id)arg1;
- (void).cxx_destruct;
@end
