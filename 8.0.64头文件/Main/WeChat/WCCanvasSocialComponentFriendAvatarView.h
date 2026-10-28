@interface WCCanvasSocialComponentFriendAvatarView : UIView
{
    BOOL _useCdn; // +0x8
    unsigned int _scene; // +0xc
}
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned int)arg2 useCdn:(BOOL)arg3;
- (void)updateAvatarsWithAdAvatar:(id)arg1 friendUsernames:(id)arg2 commonAvatarImgs:(id)arg3;
- (id)generateAvatarViewWithUrl:(id)arg1;
- (id)generateAvatarViewWithUsername:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)useCdn;
- (void)setUseCdn:(BOOL)arg1;
@end
