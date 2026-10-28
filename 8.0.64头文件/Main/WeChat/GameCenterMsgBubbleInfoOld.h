@interface GameCenterMsgBubbleInfoOld : NSObject
{
    int _action; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _desc; // +0x18
    NSString * _url; // +0x20
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
