@interface WCFinderMusicFeedVM : NSObject
{
    BOOL _showMVIcon; // +0x8
    BOOL _couldDelete; // +0x9
    BOOL _couldSlidDelete; // +0xa
    BOOL _couldRetry; // +0xb
    BOOL _isTransfering; // +0xc
    BOOL _showViwer; // +0xd
    BOOL _showProgress; // +0xe
    BOOL _enabled; // +0xf
    WCFinderFeedContentVM * _contentVM; // +0x10
    long long _status; // +0x18
    long long _viewerCount; // +0x20
    long long _likeCount; // +0x28
    NSString * _title; // +0x30
    long long _titleLineNumber; // +0x38
    NSString * _author; // +0x40
    NSString * _descString; // +0x48
    NSString * _accessibilityDescString; // +0x50
    NSString * _timeString; // +0x58
    NSString * _typeString; // +0x60
    long long _cellAlignStyle; // +0x68
    long long _style; // +0x70
}
+ (id)feedVMWithContentVM:(id)arg1 style:(long long)arg2;
- (id)init;
- (void)updateDataItem:(id)arg1;
- (void)updateStatus;
- (void)updateDraftStatus;
- (void)updateMVStatus;
- (void)_updateCommonFields;
- (id)observeKey;
- (double)uploadProgress;
- (id)dataItem;
- (long long)compareTime:(id)arg1;
- (id)formatTimeString:(double)arg1;
- (id)accessibilityLabel;
- (id)coverMediaWrap;
- (id)coverUrl;
- (BOOL)couldDelete;
- (BOOL)couldSlidDelete;
- (BOOL)couldRetry;
- (BOOL)isTransfering;
- (BOOL)showViwer;
- (long long)exposeDeleteElement;
- (id)exposeId;
- (id)description;
- (id)defaultIconWithSize:(CGSize *)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (long long)viewerCount;
- (void)setViewerCount:(long long)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)titleLineNumber;
- (void)setTitleLineNumber:(long long)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)descString;
- (void)setDescString:(id)arg1;
- (id)accessibilityDescString;
- (void)setAccessibilityDescString:(id)arg1;
- (id)timeString;
- (void)setTimeString:(id)arg1;
- (id)typeString;
- (void)setTypeString:(id)arg1;
- (BOOL)showMVIcon;
- (void)setShowMVIcon:(BOOL)arg1;
- (long long)cellAlignStyle;
- (void)setCellAlignStyle:(long long)arg1;
- (void)setCouldDelete:(BOOL)arg1;
- (void)setCouldSlidDelete:(BOOL)arg1;
- (void)setCouldRetry:(BOOL)arg1;
- (void)setIsTransfering:(BOOL)arg1;
- (void)setShowViwer:(BOOL)arg1;
- (BOOL)showProgress;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end

