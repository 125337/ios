@interface WCFinderModifyHistoryLogPannel : MMUIView
{
    FeedRecord * _initialInfo; // +0x8
    NSArray * _imageList; // +0x10
}
+ (id)buildWithFeedInitialInfo:(id)arg1 imageList:(id)arg2;
- (void)displayOnView:(id)arg1;
- (id)initialInfo;
- (void)setInitialInfo:(id)arg1;
- (id)imageList;
- (void)setImageList:(id)arg1;
- (void).cxx_destruct;
@end
