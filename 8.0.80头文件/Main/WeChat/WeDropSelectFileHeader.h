@interface WeDropSelectFileHeader : WeDropHeadImageTitleHeader
{
    id <WeDropSendConnectedViewDelegate> _delegate; // +0x8
    NSMutableArray * _lastSendInfo; // +0x10
    WeDropSelectFileContentComponent * _contentView; // +0x18
}
- (void)initSubviews;
- (void)setDelegate:(id)arg1;
- (void)setLastSendInfo:(id)arg1;
- (id)delegate;
- (id)lastSendInfo;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
