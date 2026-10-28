@interface MMFinderLiveKSKitMusicSong : NSObject <MMFinderLiveKTVResourceExt>
{
    BOOL _isSingBySelf; // +0x8
    BOOL _isSingAsMajor; // +0x9
    BOOL _isPreparing; // +0xa
    BOOL _isResourceLoading; // +0xb
    BOOL _isResourceParsing; // +0xc
    int _midiTotalScore; // +0x10
    MMFinderLiveKTVSongInfo * _songInfo; // +0x18
    NSString * _midiScoreLevel; // +0x20
    MMFinderLiveKTVSongItem * _songItem; // +0x28
    FinderLiveKtvSongScoreReportRequest_ScoreInfo * _finalScoreInfo; // +0x30
    FinderLiveKtvSongScoreReportRequest_ExtReportInfo * _finalSingExtReportInfo; // +0x38
    NSArray * _sentenceList; // +0x40
    unsigned long long _prepareResult; // +0x48
    id <MMLiveUniqueTaskId> _taskId; // +0x50
    unsigned long long _mode; // +0x58
    id /* block */ _resLoadCompletion; // +0x60
    NSArray * _sentenceTimeList; // +0x68
    NSData * _noteData; // +0x70
    NSMutableDictionary * _resourceDict; // +0x78
    NSMutableDictionary * _resourceParseTaskDict; // +0x80
    NSMutableArray * _musicNoteList; // +0x88
}
+ (unsigned long long)transferResTypeToOriginalResState:(unsigned int)arg1;
+ (unsigned long long)transferResTypeToResState:(unsigned int)arg1;
+ (id)transferAverScoreToLevel:(double)arg1;
+ (int)goodScoreStandard;
+ (int)perfectScoreStandard;
- (id)initWithSongItem:(id)arg1 taskId:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)prepareResource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)getNoteSrcData;
- (void)updateMusicNotes:(id)arg1;
- (void)processMIDITotalScore:(int)arg1;
- (void)processMIDIScoreLevel:(double)arg1;
- (id)getSentenceSrcArray;
- (id)getLyricSentenceList;
- (id)getMusicNoteList;
- (void)updateFinalScoreInfo:(id)arg1;
- (void)updateFinalSingExtReportInfo:(id)arg1;
- (void)startResourcePreparing;
- (void)startResourceLoading;
- (void)finishResourceLoading;
- (void)startResourceParsingWithPinToken:(id)arg1;
- (void)finishResourceParsingWithPinToken:(id)arg1;
- (void)checkResourcePreparingFinishWithPinToken:(id)arg1;
- (void)finishResourcePreparingWithPinToken:(id)arg1;
- (BOOL)isAllResourcesPrepared;
- (long long)getAllResourcesState;
- (long long)getAllOriginalResourcesState;
- (id)getAllOriginalResDownloadResultDict;
- (id)getAllResParseErrorDict;
- (BOOL)needSongRes;
- (BOOL)isSingingEnd;
- (void)onLiveKTVSongResourcesLoaded:(BOOL)arg1 songId:(id)arg2 resources:(id)arg3 needSongRes:(BOOL)arg4;
- (void)cacheResourcesIfNeed:(id)arg1;
- (void)parseResourcesIfNeed:(id)arg1 pinToken:(id)arg2;
- (void)updateResParseResult:(id)arg1 resType:(unsigned int)arg2;
- (void)checkResourcesParsingFinishWithPinToken:(id)arg1;
- (id)songId;
- (id)uniqueId;
- (id)baseResourceDir;
- (id)description;
- (id)songInfo;
- (void)setSongInfo:(id)arg1;
- (int)midiTotalScore;
- (void)setMidiTotalScore:(int)arg1;
- (id)midiScoreLevel;
- (void)setMidiScoreLevel:(id)arg1;
- (id)songItem;
- (void)setSongItem:(id)arg1;
- (id)finalScoreInfo;
- (void)setFinalScoreInfo:(id)arg1;
- (id)finalSingExtReportInfo;
- (void)setFinalSingExtReportInfo:(id)arg1;
- (BOOL)isSingBySelf;
- (void)setIsSingBySelf:(BOOL)arg1;
- (id)sentenceList;
- (void)setSentenceList:(id)arg1;
- (BOOL)isSingAsMajor;
- (void)setIsSingAsMajor:(BOOL)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (unsigned long long)prepareResult;
- (void)setPrepareResult:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id /* block */)resLoadCompletion;
- (void)setResLoadCompletion:(id /* block */)arg1;
- (BOOL)isResourceLoading;
- (void)setIsResourceLoading:(BOOL)arg1;
- (BOOL)isResourceParsing;
- (void)setIsResourceParsing:(BOOL)arg1;
- (id)sentenceTimeList;
- (void)setSentenceTimeList:(id)arg1;
- (id)noteData;
- (void)setNoteData:(id)arg1;
- (id)resourceDict;
- (void)setResourceDict:(id)arg1;
- (id)resourceParseTaskDict;
- (void)setResourceParseTaskDict:(id)arg1;
- (id)musicNoteList;
- (void)setMusicNoteList:(id)arg1;
- (void).cxx_destruct;
@end
