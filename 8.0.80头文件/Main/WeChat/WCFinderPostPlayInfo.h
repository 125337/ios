@interface WCFinderPostPlayInfo : NSObject <WCFinderPostPlaySquareExt>
{
    BOOL _isFav; // +0x8
    BOOL _referenceVideoEnabled; // +0x9
    BOOL _hasReferenceVideo; // +0xa
    int _fromScene; // +0xc
    unsigned long long _playId; // +0x10
    NSString * _byPassInfo; // +0x18
    NSString * _jumpInfoNativeByPassInfo; // +0x20
    NSString * _titleText; // +0x28
    NSString * _subTitle; // +0x30
    NSString * _fromObjectSessionBuffer; // +0x38
    unsigned long long _sourceCommentScene; // +0x40
    NSString * _fromObjectID; // +0x48
    NSString * _jumpInfoClientReportInfo; // +0x50
    NSNumber * _flowCommentScene; // +0x58
    NSNumber * _listCommentScene; // +0x60
    WCFinderDataItem * _fromDataItem; // +0x68
    WCFinderPostSourceInfo * _sourceInfo; // +0x70
    long long _enterChildScene; // +0x78
}
- (id)initWithPlayId:(unsigned long long)arg1;
- (id)initWithFinderPostPlayParams:(id)arg1;
- (long long)clusterSource;
- (void)onPostPlayInfoFavFlagChange:(BOOL)arg1;
- (unsigned long long)playId;
- (void)setPlayId:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)jumpInfoNativeByPassInfo;
- (void)setJumpInfoNativeByPassInfo:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)fromObjectSessionBuffer;
- (void)setFromObjectSessionBuffer:(id)arg1;
- (unsigned long long)sourceCommentScene;
- (void)setSourceCommentScene:(unsigned long long)arg1;
- (id)fromObjectID;
- (void)setFromObjectID:(id)arg1;
- (id)jumpInfoClientReportInfo;
- (void)setJumpInfoClientReportInfo:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (id)flowCommentScene;
- (void)setFlowCommentScene:(id)arg1;
- (id)listCommentScene;
- (void)setListCommentScene:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (BOOL)referenceVideoEnabled;
- (void)setReferenceVideoEnabled:(BOOL)arg1;
- (BOOL)hasReferenceVideo;
- (void)setHasReferenceVideo:(BOOL)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (long long)enterChildScene;
- (void)setEnterChildScene:(long long)arg1;
- (void).cxx_destruct;
@end
