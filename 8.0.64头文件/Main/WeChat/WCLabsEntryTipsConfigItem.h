@interface WCLabsEntryTipsConfigItem : NSObject
{
    int _priority; // +0x8
    NSString * _appScheme; // +0x10
    NSString * _packetName; // +0x18
    NSDictionary * _wording; // +0x20
    NSString * _swiperId; // +0x28
    NSDictionary * _extInfo; // +0x30
}
- (id)appScheme;
- (void)setAppScheme:(id)arg1;
- (id)packetName;
- (void)setPacketName:(id)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)swiperId;
- (void)setSwiperId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
