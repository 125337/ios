@interface WCFinderCommentImageBrowseConfig : NSObject
{
    BOOL _notTriggerParentVCLifeCycleFunc; // +0x8
    BOOL _isMemberQA; // +0x9
    int _viewScene; // +0xc
    int _pullScene; // +0x10
    UIView * _startView; // +0x18
    UIImage * _startImage; // +0x20
    unsigned long long _commentStyleType; // +0x28
    unsigned long long _initRefCommentID; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
    NSString * _enterSessionId; // +0x40
    FinderGetCommentListCtx * _commentCtx; // +0x48
    unsigned long long _sortType; // +0x50
    unsigned long long _selectedType; // +0x58
    WCFinderContact * _currentFinderContact; // +0x60
    unsigned long long _replyScene; // +0x68
    WCFinderCommentImageBrowseDataReportParams * _dataReportParams; // +0x70
    id /* block */ _getLastBufferRequest; // +0x78
    id /* block */ _getRootCommentRequest; // +0x80
    id /* block */ _updateIdentityCallback; // +0x88
    id /* block */ _exitCallback; // +0x90
}
- (void)checkParams;
- (void)fillWithCommentDetailVM:(id)arg1;
- (id)startView;
- (void)setStartView:(id)arg1;
- (id)startImage;
- (void)setStartImage:(id)arg1;
- (BOOL)notTriggerParentVCLifeCycleFunc;
- (void)setNotTriggerParentVCLifeCycleFunc:(BOOL)arg1;
- (unsigned long long)commentStyleType;
- (void)setCommentStyleType:(unsigned long long)arg1;
- (unsigned long long)initRefCommentID;
- (void)setInitRefCommentID:(unsigned long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (int)pullScene;
- (void)setPullScene:(int)arg1;
- (id)commentCtx;
- (void)setCommentCtx:(id)arg1;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg1;
- (unsigned long long)selectedType;
- (void)setSelectedType:(unsigned long long)arg1;
- (BOOL)isMemberQA;
- (void)setIsMemberQA:(BOOL)arg1;
- (id)currentFinderContact;
- (void)setCurrentFinderContact:(id)arg1;
- (unsigned long long)replyScene;
- (void)setReplyScene:(unsigned long long)arg1;
- (id)dataReportParams;
- (void)setDataReportParams:(id)arg1;
- (id /* block */)getLastBufferRequest;
- (void)setGetLastBufferRequest:(id /* block */)arg1;
- (id /* block */)getRootCommentRequest;
- (void)setGetRootCommentRequest:(id /* block */)arg1;
- (id /* block */)updateIdentityCallback;
- (void)setUpdateIdentityCallback:(id /* block */)arg1;
- (id /* block */)exitCallback;
- (void)setExitCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
