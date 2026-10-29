@interface WCFinderVideoProducerMusicCellViewModel : NSObject <WCFinderVideoProducerLoadMoreViewModelProtocol, EditVideoBGMPlayerData>
{
    BOOL isLoadMoreCell; // +0x8
    BOOL _isSelected; // +0x9
    BOOL _shouldShowLyrics; // +0xa
    unsigned long long initialStateForLoadMoreCell; // +0x10
    OMJMusicInfo * _oMJMusicInfo; // +0x18
    long long _cellOrder; // +0x20
    NSString * _musicUrlPath; // +0x28
    long long _musicClipStartTimeMS; // +0x30
}
- (id)initWithOMJMusicInfo:(id)arg1;
- (void)bindByCellView:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)musicUrl;
- (id)description;
- (unsigned long long)musicType;
- (unsigned long long)initialStateForLoadMoreCell;
- (void)setInitialStateForLoadMoreCell:(unsigned long long)arg1;
- (BOOL)isLoadMoreCell;
- (void)setIsLoadMoreCell:(BOOL)arg1;
- (id)oMJMusicInfo;
- (void)setOMJMusicInfo:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (long long)cellOrder;
- (void)setCellOrder:(long long)arg1;
- (id)musicUrlPath;
- (void)setMusicUrlPath:(id)arg1;
- (long long)musicClipStartTimeMS;
- (void)setMusicClipStartTimeMS:(long long)arg1;
- (BOOL)shouldShowLyrics;
- (void)setShouldShowLyrics:(BOOL)arg1;
- (void).cxx_destruct;
@end
