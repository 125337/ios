@interface CBTBrandLiveCommentCellInfo : NSObject
{
    BOOL _isReported; // +0x8
    unsigned int _cellType; // +0xc
    NSString * _badgeText; // +0x10
    BizAgentLiveChatRoomResp_QueryItem * _data; // +0x18
}
- (unsigned int)cellType;
- (void)setCellType:(unsigned int)arg1;
- (BOOL)isReported;
- (void)setIsReported:(BOOL)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
