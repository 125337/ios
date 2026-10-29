@interface WSWowShareGlobalReceiverViewController : MMUIViewController <MMGrowTextViewDelegate, ITopStoryColikeExt, UIScrollViewDelegate>
{
    BOOL _disappearIsFromSubmit; // +0x68
    UIScrollView * _contentView; // +0x70
    WSWowShareReceiverVideoContentView * _videoContentView; // +0x78
    MMGrowTextView * _imputField; // +0x80
    MMUILabel * _textNumView; // +0x88
    MMUILabel * _textLimitView; // +0x90
    MMUIButton * _wowEduButton; // +0x98
    NSString * _paramString; // +0xa0
    ColikeAppInfo * _appInfo; // +0xa8
    long long _type; // +0xb0
    NSString * _docId; // +0xb8
    id /* block */ _resultBlock; // +0xc0
}
+ (BOOL)canPresentWowGloabalReceiverPage:(id)arg1 appId:(id)arg2 appName:(id)arg3;
- (id)initWithOpenParamString:(id)arg1 appId:(id)arg2 appName:(id)arg3 resultBlock:(id /* block */)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)analyseData;
- (void)initNavBar;
- (void)initView;
- (void)updateTextNoteViews;
- (void)foldSelf;
- (void)onCancel;
- (void)onDone;
- (void)enterCommentDone:(id)arg1;
- (void)openWowEducatePage;
- (void)onRequestColikePostEnd:(BOOL)arg1 errorMsg:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)videoContentView;
- (void)setVideoContentView:(id)arg1;
- (id)imputField;
- (void)setImputField:(id)arg1;
- (id)textNumView;
- (void)setTextNumView:(id)arg1;
- (id)textLimitView;
- (void)setTextLimitView:(id)arg1;
- (id)wowEduButton;
- (void)setWowEduButton:(id)arg1;
- (id)paramString;
- (void)setParamString:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (BOOL)disappearIsFromSubmit;
- (void)setDisappearIsFromSubmit:(BOOL)arg1;
- (void).cxx_destruct;
@end

