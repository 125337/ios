@interface KindaDashLineBoarderLineView : KindaLayout <MMKDashLineBoarderLineView>
{
    TrueDashLineBoarderView * _dashLineBoarderView; // +0xa8
}
- (void)addView:(id)arg1;
- (void)addView:(id)arg1 position:(int)arg2;
- (void)removeView:(id)arg1;
- (void)removeAllViews;
- (void)setFocusableInTouchMode:(BOOL)arg1;
- (void)setDashWidth:(float)arg1;
- (float)getDashWidth;
- (void)setDashColor:(id)arg1;
- (id)getDashColor;
- (void)setCornerRadius:(float)arg1;
- (float)getCornerRadius;
- (id)getView;
- (id)dashLineBoarderView;
- (void)setDashLineBoarderView:(id)arg1;
- (void).cxx_destruct;
@end
