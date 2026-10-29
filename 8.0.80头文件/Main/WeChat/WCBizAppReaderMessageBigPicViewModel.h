@interface WCBizAppReaderMessageBigPicViewModel : BizAppReaderMessageBigPicViewModel
{
    WCMediaItem * _mediaItem; // +0x8
}
+ (BOOL)showBigPicWithWCContentItem:(id)arg1;
- (id)initWithWCContentItem:(id)arg1 title:(id)arg2 sourceUsrname:(id)arg3 sourceNickname:(id)arg4 viewStyle:(id)arg5;
- (void)refreshLayout;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void).cxx_destruct;
@end
