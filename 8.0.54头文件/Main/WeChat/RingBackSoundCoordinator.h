@interface RingBackSoundCoordinator : NSObject <RingBackInfoDisplaySheetViewDelegate>
{
    BOOL _hasShowRingBackInfoView; // +0x8
    BOOL _isCaller; // +0x9
    BOOL _listenedNewRingBack; // +0xa
    BOOL _hasResetSpeakerVolume; // +0xb
    BOOL _hasResetReceiverVolume; // +0xc
    BOOL _isAudio; // +0xd
    BOOL _isOrignalVolumeValueQueried; // +0xe
    BOOL _shouldUseNewVolumeStrategy; // +0xf
    BOOL _isEnd; // +0x10
    float _originalVolumeValue; // +0x14
    float _defaultVolume; // +0x18
    unsigned long long _entryType; // +0x20
    NSString * _chatroomUsername; // +0x28
    MMUIViewController * _viewController; // +0x30
    RingToneDetail * _ringDetail; // +0x38
    id /* block */ _jumpBlock; // +0x40
    VideoRingNetProvider * _provider; // +0x48
    CContact * _contact; // +0x50
    RingToneAvPlayer * _player; // +0x58
    RingBackInfoDisplaySheetView * _sheetView; // +0x60
    AnyPromise * _ringFilePromise; // +0x68
    RingTonePlaySoundReporter_23613 * _ringToneReporter; // +0x70
    RingBackPlaySoundReporter_23653 * _ringBackReporter; // +0x78
}
- (id)initWithContact:(id)arg1 selfIsCaller:(BOOL)arg2 isAudio:(BOOL)arg3;
- (id)init;
- (void)commonInit;
- (void)dealloc;
- (id)playRingBackSound;
- (void)playRingToneSound;
- (void)clear;
- (void)vibrate;
- (id)getRingToneTitle;
- (id)getFriendRingDetail;
- (id)getAudiaoFileAndCheckUpdate;
- (id)getAudiaoFile;
- (id)doPromise:(id)arg1 withinTime:(double)arg2;
- (void)playLocalRingFile;
- (void)showRingBackInfoView;
- (BOOL)isCalled;
- (void)checklistenedNewRingBack;
- (void)notificationRingReportRegister;
- (void)ringBackReporterInit;
- (void)ringToneReporterInit;
- (id)genRingToneReporter;
- (float)getRingVolume;
- (void)setRingVolume:(float)arg1;
- (void)restoreOriginalVolume;
- (void)__resetVolume;
- (void)resetSpeakerVolume;
- (void)resetReceiverVolume;
- (void)pause;
- (void)resume;
- (void)setMute:(BOOL)arg1;
- (void)restart;
- (void)onRingToneJumpToAuthorPage;
- (id)getCurrentNavigationController;
- (unsigned long long)entryType;
- (void)setEntryType:(unsigned long long)arg1;
- (id)chatroomUsername;
- (void)setChatroomUsername:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)ringDetail;
- (void)setRingDetail:(id)arg1;
- (id /* block */)jumpBlock;
- (void)setJumpBlock:(id /* block */)arg1;
- (BOOL)hasShowRingBackInfoView;
- (void)setHasShowRingBackInfoView:(BOOL)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)ringFilePromise;
- (void)setRingFilePromise:(id)arg1;
- (id)ringToneReporter;
- (void)setRingToneReporter:(id)arg1;
- (id)ringBackReporter;
- (void)setRingBackReporter:(id)arg1;
- (BOOL)listenedNewRingBack;
- (void)setListenedNewRingBack:(BOOL)arg1;
- (BOOL)hasResetSpeakerVolume;
- (void)setHasResetSpeakerVolume:(BOOL)arg1;
- (BOOL)hasResetReceiverVolume;
- (void)setHasResetReceiverVolume:(BOOL)arg1;
- (BOOL)isAudio;
- (void)setIsAudio:(BOOL)arg1;
- (float)originalVolumeValue;
- (void)setOriginalVolumeValue:(float)arg1;
- (BOOL)isOrignalVolumeValueQueried;
- (void)setIsOrignalVolumeValueQueried:(BOOL)arg1;
- (float)defaultVolume;
- (void)setDefaultVolume:(float)arg1;
- (BOOL)shouldUseNewVolumeStrategy;
- (void)setShouldUseNewVolumeStrategy:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

