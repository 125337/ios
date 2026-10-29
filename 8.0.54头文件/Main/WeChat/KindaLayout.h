@interface KindaLayout : KindaView <MMKViewLayout>
{
    long long flexDirection; // +0xa8
    long long justifyContent; // +0xb0
    long long flexWrap; // +0xb8
    long long alignItems; // +0xc0
    long long alignContent; // +0xc8
    NSMutableArray * _subviewArray; // +0xd0
}
- (id)init;
- (void)setFlexDirection:(long long)arg1;
- (long long)getFlexDirection;
- (void)setJustifyContent:(long long)arg1;
- (long long)getJustifyContent;
- (void)setFlexWrap:(long long)arg1;
- (long long)getFlexWrap;
- (void)setAlignItems:(long long)arg1;
- (long long)getAlignItems;
- (void)setAlignContent:(long long)arg1;
- (long long)getAlignContent;
- (void)addView:(id)arg1;
- (void)addView:(id)arg1 position:(int)arg2;
- (void)removeView:(id)arg1;
- (void)removeAllViews;
- (void)setFocusableInTouchMode:(BOOL)arg1;
- (void)setDisableHighlightDarkMode:(BOOL)arg1;
- (id)subviewArray;
- (void)setSubviewArray:(id)arg1;
- (void).cxx_destruct;
@end

