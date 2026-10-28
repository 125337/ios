@interface RingToneDetail : NSObject
{
    BOOL _hasVibrateFile; // +0x8
    BOOL _isPlaying; // +0x9
    BOOL _exposed; // +0xa
    BOOL _jumpFromFriendRing; // +0xb
    BOOL _initFromFinderItem; // +0xc
    unsigned int _vibrateFileVersion; // +0x10
    unsigned long long _type; // +0x18
    MusicRingToneSubDetail * _music; // +0x20
    FinderRingToneSubDetail * _finder; // +0x28
    LocalRingToneSubDetail * _local; // +0x30
    RingTone * _core; // +0x38
    NSString * _vibrateFileUrlStr; // +0x40
    RingBackDetail * _ringDetail; // +0x48
    WCFinderFeedContentVM * _vm; // +0x50
    RingBackTextStatusInfo * _verifyInfo; // +0x58
    double _startPlayVideoTime; // +0x60
    double _mediaHeight; // +0x68
    unsigned long long _requestID; // +0x70
    unsigned long long _searchID; // +0x78
    MMListenSimplePlayableInfo * _tingInfo; // +0x80
    AnyPromise * _vibrateFilePromise; // +0x88
}
+ (id)WeChatDefaultRing;
+ (id)initFromRingBackPbDetail:(id)arg1 ringBackPbCore:(id)arg2 error:(id *)arg3;
- (id)initFromPb:(id)arg1;
- (id)initFromPb:(id)arg1 core:(id)arg2;
- (id)initFromFinder:(id)arg1;
- (id)initFromLocalFile:(id)arg1;
- (id)initAsInvalidPlaceHolder;
- (id)identifier;
- (void)dealloc;
- (id)cropedTempAudioFilePath;
- (id)genAudioFileTransferTaskWith:(id)arg1;
- (id)promiseRingRawFilePath;
- (id)fetchFinderItemRawFilePath;
- (id)finderAudioFile;
- (id)fetchMusicRawFilePath;
- (id)vibrateFilePromise;
- (id)finderItem;
- (void)setFinderItem:(id)arg1;
- (id)searchHitWords;
- (id)title;
- (id)authorDesc;
- (id)titleAndAuthor;
- (id)concreteItem;
- (id)description;
- (BOOL)isAuthenticated;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)music;
- (void)setMusic:(id)arg1;
- (id)finder;
- (void)setFinder:(id)arg1;
- (id)local;
- (void)setLocal:(id)arg1;
- (id)core;
- (void)setCore:(id)arg1;
- (id)vibrateFileUrlStr;
- (void)setVibrateFileUrlStr:(id)arg1;
- (unsigned int)vibrateFileVersion;
- (void)setVibrateFileVersion:(unsigned int)arg1;
- (BOOL)hasVibrateFile;
- (void)setHasVibrateFile:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)exposed;
- (void)setExposed:(BOOL)arg1;
- (id)ringDetail;
- (void)setRingDetail:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (double)startPlayVideoTime;
- (void)setStartPlayVideoTime:(double)arg1;
- (BOOL)jumpFromFriendRing;
- (void)setJumpFromFriendRing:(BOOL)arg1;
- (BOOL)initFromFinderItem;
- (void)setInitFromFinderItem:(BOOL)arg1;
- (double)mediaHeight;
- (void)setMediaHeight:(double)arg1;
- (unsigned long long)requestID;
- (void)setRequestID:(unsigned long long)arg1;
- (unsigned long long)searchID;
- (void)setSearchID:(unsigned long long)arg1;
- (id)tingInfo;
- (void)setTingInfo:(id)arg1;
- (void)setVibrateFilePromise:(id)arg1;
- (void).cxx_destruct;
@end
