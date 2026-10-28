@interface MMLiveStatisticsItemView : UIView
{
    MMLiveColorfulLabel * _header; // +0x8
    UIView * _contentContainer; // +0x10
    MMLiveColorfulLabel * _content; // +0x18
    UILabel * _caption; // +0x20
    unsigned long long _contentSemantic; // +0x28
}
+ (id)labelGradientColorsForMonumentTier:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1 enableFontScaling:(BOOL)arg2;
- (id)initWithGenericStatisticsItem:(id)arg1 enableFontScaling:(BOOL)arg2;
- (id)initWithHighlightedStatisticsItem:(id)arg1 enableFontScaling:(BOOL)arg2;
- (id)initWithMonumentalStatisticsItem:(id)arg1 enableFontScaling:(BOOL)arg2;
- (id)initWithMonumentalStatisticsItem:(id)arg1 coalescedCount:(unsigned long long)arg2 enableFontScaling:(BOOL)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)initializeComponentsWithFontScaling:(BOOL)arg1;
- (id)systemFontOfSize:(double)arg1 weight:(double)arg2 withScaling:(BOOL)arg3;
- (id)mediumWechatStdFontOfSize:(double)arg1 withScaling:(BOOL)arg2;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)caption;
- (void)setCaption:(id)arg1;
- (unsigned long long)contentSemantic;
- (void)setContentSemantic:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
