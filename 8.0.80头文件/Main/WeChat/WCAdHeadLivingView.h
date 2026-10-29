@interface WCAdHeadLivingView : MMUIView
{
    WCAdHeadLivingInfo * _livingInfo; // +0x8
    MMUIView * _backgroundView; // +0x10
    MMUIImageView * _iconView; // +0x18
    MMUILabel * _liveStatusText; // +0x20
}
- (id)initWithDataItem:(id)arg1;
- (void)initSubviews;
- (void)adjustSubviews;
- (void)clearAllSubviews;
- (id)iconView;
- (id)liveStatusText;
- (id)backgroundView;
- (double)viewWidth;
- (BOOL)isLiveEnd;
- (void)updateDataItem:(id)arg1;
- (id)livingInfo;
- (void)setLivingInfo:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLiveStatusText:(id)arg1;
- (void).cxx_destruct;
@end
