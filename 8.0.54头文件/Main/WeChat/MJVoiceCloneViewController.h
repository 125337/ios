@interface MJVoiceCloneViewController : UIViewController <MJVoiceCloneIntroViewDelegate, MJVoiceCloneMainViewDelegate, MJVoiceInputManagerDelegate, MJVoiceCloneProgressMaskViewDelegate>
{
    BOOL _isCancelledVoiceCloneRequest; // +0x8
    float _voiceCloneFakeProgress; // +0xc
    id <MJVoiceCloneViewControllerDelegate> _delegate; // +0x10
    MJVoiceInputManager * _voiceInputManager; // +0x18
    MJPlaybackViewModel * _playbackVM; // +0x20
    MMUIView * _backgroundView; // +0x28
    MJVoiceCloneIntroView * _introView; // +0x30
    MJVoiceCloneMainView * _mainView; // +0x38
    MJVoiceCloneProgressMaskView * _progressView; // +0x40
    MMTimer * _voiceCloneFakeProgressTimer; // +0x48
}
+ (id)genAudioID;
- (id)initWithPlaybackVM:(id)arg1 voiceInputManager:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupViews;
- (void)voiceCloneIntroViewDidTapOnCloseButton:(id)arg1;
- (void)voiceCloneIntroView:(id)arg1 didTapOnAgreementLink:(id)arg2;
- (void)voiceCloneIntroViewDidTapOnGoRecordingButton:(id)arg1;
- (void)voiceCloneMainViewDidTapOnCloseButton:(id)arg1;
- (void)voiceCloneMainViewDidStartRecording:(id)arg1;
- (void)voiceCloneMainViewDidStopRecording:(id)arg1;
- (void)voiceCloneMainViewDidCancelRecording:(id)arg1;
- (void)voiceInputManager:(id)arg1 didUpdateAudioLevel:(float)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didStopRecordingWithIdentifier:(id)arg2 isCancelled:(BOOL)arg3 audioFilePath:(id)arg4 captions:(id)arg5 error:(id)arg6;
- (void)requestVoiceCloneWithAudioID:(id)arg1 audioFilePath:(id)arg2;
- (void)requestSpeechCloneRegText;
- (void)voiceCloneProgressMaskViewDidCancel:(id)arg1;
- (void)updateViewsForStartVoiceClone;
- (void)updateViewsForCancelVoiceClone;
- (void)showProgressToastWithText:(id)arg1;
- (void)dismissProgressToast;
- (void)showSucceededProgressToast;
- (void)_reportVoiceCloneFailedWithReason:(id)arg1;
- (void)showFailedTipsWithText:(id)arg1;
- (void)showFailedRetryTipsWithText:(id)arg1 retryHandler:(id /* block */)arg2;
- (void)updateProgressToast:(double)arg1 withText:(id)arg2;
- (void)updateVoiceCloneFakeProgressByOnePercent;
- (void)startFakeProgressTimer;
- (void)stopFakeProgressTimer;
- (id)backgroundView;
- (id)introView;
- (id)mainView;
- (id)progressView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceInputManager;
- (id)playbackVM;
- (void)setBackgroundView:(id)arg1;
- (void)setIntroView:(id)arg1;
- (void)setMainView:(id)arg1;
- (BOOL)isCancelledVoiceCloneRequest;
- (void)setIsCancelledVoiceCloneRequest:(BOOL)arg1;
- (void)setProgressView:(id)arg1;
- (float)voiceCloneFakeProgress;
- (void)setVoiceCloneFakeProgress:(float)arg1;
- (id)voiceCloneFakeProgressTimer;
- (void)setVoiceCloneFakeProgressTimer:(id)arg1;
- (void).cxx_destruct;
@end

