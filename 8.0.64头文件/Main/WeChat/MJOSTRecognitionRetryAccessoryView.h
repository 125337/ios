@interface MJOSTRecognitionRetryAccessoryView : UICollectionReusableView <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
    MJPublisherButton * _retryButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupViews;
- (void)retryButtonTouchUpInside:(id)arg1;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (void).cxx_destruct;
@end
