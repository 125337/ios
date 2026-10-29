@interface WCAdDynamicFeedSightView : WCSightView
{
    BOOL _alreadyPlayedToEndFlag; // +0x9
}
- (void)layoutSubviews;
- (void)customPlayerInfo:(id)arg1;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)onWCPlayerPlayEnd:(BOOL)arg1;
- (void)exitVideoPlay;
- (BOOL)hasEndCover;
- (BOOL)alreadyPlayedToEndFlag;
- (void)setAlreadyPlayedToEndFlag:(BOOL)arg1;
@end

