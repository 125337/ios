@interface EcsKfProductCardMessageViewModel : CommonMessageViewModel
{
    unsigned int _operationItemShowType; // +0x70
    EcsKfProductCardData * _convertResult; // +0x78
    ReaderWrap * _readerWrap; // +0x80
    NSString * _topTitle; // +0x88
    NSArray * _operationItems; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)readerWrapFromMessageWrap:(id)arg1;
+ (id)convertResultFromMessageWrap:(id)arg1;
+ (id)topTitleFromConvertResult:(id)arg1;
+ (id)operationItemsFromReaderWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (void)updateProductConvertResult:(id)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (BOOL)canShowMsgReplyMenuItem;
- (double)messageViewWidth;
- (double)topTitleHeight;
- (double)operationButtonAreaHeight;
- (double)messageViewHeight;
- (id)convertResult;
- (void)setConvertResult:(id)arg1;
- (id)readerWrap;
- (void)setReaderWrap:(id)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)operationItems;
- (void)setOperationItems:(id)arg1;
- (unsigned int)operationItemShowType;
- (void)setOperationItemShowType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
