@interface WWKFReportFlowActionExtInfo : MMObject
{
    long long _shareScene; // +0x8
    NSString * _shareToUser; // +0x10
    NSString * _finderUserName; // +0x18
    COpenIMCustomToolBarItem * _customToolBarItem; // +0x20
    NSString * _chatSessionId; // +0x28
}
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (id)shareToUser;
- (void)setShareToUser:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)customToolBarItem;
- (void)setCustomToolBarItem:(id)arg1;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (void).cxx_destruct;
@end
