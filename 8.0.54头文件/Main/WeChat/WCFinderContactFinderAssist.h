@interface WCFinderContactFinderAssist : NSObject
{
    BOOL _hasFetchPreviewData; // +0x8
    BOOL _entranceCellExposed; // +0x9
    BOOL _useNewStyle; // +0xa
    long long _mask; // +0x10
    long long _type; // +0x18
    id <WCFinderContactFinderAssistDelegate> _delegate; // +0x20
    double _customViewRightSmall; // +0x28
    double _imageViewMargin; // +0x30
    double _customViewLeftMargin; // +0x38
    NSString * _username; // +0x40
    NSString * _finderUsername; // +0x48
    NSString * _alreadyFetchKey; // +0x50
    WCFinderContactPreviewData * _previewData; // +0x58
}
- (id)init;
- (void)setupWXUsername:(id)arg1 finderUserName:(id)arg2;
- (id)makeFinderSection;
- (void)addFinderToSection:(id)arg1;
- (id)finderAuthInfo;
- (id)finderAuthString;
- (id)fetchAndSyncFinderContactPreviewData;
- (void)fetchPreviewDataFinish;
- (id)fetchLocalPreviewData;
- (id)fetchCheckKey;
- (void)addFinderEntranceCellAtSection:(id)arg1;
- (BOOL)hasFinderEntranceCell;
- (id)finderEntranceCellInfo;
- (id)getFinderCellViewNewStyle:(BOOL)arg1;
- (void)showFinderProfile;
- (id)contact;
- (void)onTapAuthViews;
- (long long)mask;
- (void)setMask:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)customViewRightSmall;
- (void)setCustomViewRightSmall:(double)arg1;
- (double)imageViewMargin;
- (void)setImageViewMargin:(double)arg1;
- (double)customViewLeftMargin;
- (void)setCustomViewLeftMargin:(double)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)hasFetchPreviewData;
- (void)setHasFetchPreviewData:(BOOL)arg1;
- (BOOL)entranceCellExposed;
- (void)setEntranceCellExposed:(BOOL)arg1;
- (id)alreadyFetchKey;
- (void)setAlreadyFetchKey:(id)arg1;
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

