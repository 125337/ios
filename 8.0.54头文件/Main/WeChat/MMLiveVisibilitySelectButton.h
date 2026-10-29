@interface MMLiveVisibilitySelectButton : MMUIButton
{
    BOOL _hideLogo; // +0x8
    int _liveMode; // +0xc
    NSArray * _preparedRedpacketRoomIds; // +0x10
    NSArray * _visibleRoomIds; // +0x18
    NSArray * _visibleUserNames; // +0x20
    long long _lastSelectMode; // +0x28
    double _maxWidth; // +0x30
    UIImageView * _iconView; // +0x38
    UILabel * _textLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
}
- (id)init;
- (void)hideLogo:(BOOL)arg1 maxWidth:(double)arg2;
- (void)updateWithPrepareChatroomIds:(id)arg1 lastSelectMode:(long long)arg2 liveMode:(int)arg3;
- (void)updateWithVisibleRoomIds:(id)arg1 visibleUserNames:(id)arg2 firstVisibleUserName:(id)arg3 selectMode:(long long)arg4 liveMode:(int)arg5;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (id)preparedRedpacketRoomIds;
- (void)setPreparedRedpacketRoomIds:(id)arg1;
- (id)visibleRoomIds;
- (void)setVisibleRoomIds:(id)arg1;
- (id)visibleUserNames;
- (void)setVisibleUserNames:(id)arg1;
- (long long)lastSelectMode;
- (void)setLastSelectMode:(long long)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (BOOL)hideLogo;
- (void)setHideLogo:(BOOL)arg1;
- (void).cxx_destruct;
@end

