@interface WCAdBrandTopicBannerView : WCAdBaseBarView <WCAdvertiseAnimationDisplayLinkDelegate, WCAdBrandTopicListViewDelegate>
{
    WCDataItem * _dataItem; // +0x8
    unsigned long long _itemScene; // +0x10
    WCAdBrandTopicInfo * _adBrandTopicInfo; // +0x18
    WCAdBrandTopicPreludeView * _preludeView; // +0x20
    WCAdBrandTopicListView * _listView; // +0x28
    ColorGradientView * _leftGradientView; // +0x30
    ColorGradientView * _rightGradientView; // +0x38
    WCAdvertiseAnimationDisplayLink * _animationDisplayLink; // +0x40
    unsigned long long _animationStatus; // +0x48
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)dealloc;
- (void)generateSubviews;
- (void)prepare;
- (void)start;
- (void)stop;
- (id)preludeView;
- (id)listView;
- (id)animationDisplayLink;
- (id)preludeViewPositionAnimation;
- (id)preludeViewOpacityAnimation;
- (id)listViewPositionAnimation;
- (id)listViewOpacityAnimation;
- (id)leftGradientViewOpacityAnimation;
- (id)rightGradientViewOpacityAnimation;
- (void)scheduleAnimation;
- (void)startAnimation;
- (void)stopAnimation;
- (void)onAnimationDisplayLinkAnimationDone:(id)arg1;
- (id)leftGradientView;
- (id)rightGradientView;
- (id)generateGradientView;
- (void)updateLeftGradientViewVisibleWithOffsetX:(double)arg1;
- (void)updateRightGradientViewVisibleWithOffsetX:(double)arg1 contentWidth:(double)arg2 viewWidth:(double)arg3;
- (void)onTopicListViewClickedForIndex:(unsigned long long)arg1 originView:(id)arg2;
- (void)onTopicListViewDidScrollWithOffsetX:(double)arg1 contentWidth:(double)arg2 viewWidth:(double)arg3;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (id)adBrandTopicInfo;
- (void)setAdBrandTopicInfo:(id)arg1;
- (void)setPreludeView:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setLeftGradientView:(id)arg1;
- (void)setRightGradientView:(id)arg1;
- (void)setAnimationDisplayLink:(id)arg1;
- (unsigned long long)animationStatus;
- (void)setAnimationStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
