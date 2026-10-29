@interface WCFinderFavCGIParam : NSObject
{
    BOOL _isFav; // +0x8
    int _scene; // +0xc
    int _sourceType; // +0x10
    NSString * _feedID; // +0x18
    NSString * _nonceID; // +0x20
    NSString * _dupIdentifier; // +0x28
    NSMutableDictionary * _clientUdfKv; // +0x30
    FinderFavNewLifeReportInfo * _newlifeReportInfo; // +0x38
    FinderInteractionMileStoneInfo * _showMilestoneInfo; // +0x40
    WCFinderFeedLikeMilestoneInfo * _inProgressMilestone; // +0x48
}
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)dupIdentifier;
- (void)setDupIdentifier:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (id)clientUdfKv;
- (void)setClientUdfKv:(id)arg1;
- (id)newlifeReportInfo;
- (void)setNewlifeReportInfo:(id)arg1;
- (id)showMilestoneInfo;
- (void)setShowMilestoneInfo:(id)arg1;
- (id)inProgressMilestone;
- (void)setInProgressMilestone:(id)arg1;
- (void).cxx_destruct;
@end
