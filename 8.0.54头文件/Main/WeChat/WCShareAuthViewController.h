@interface WCShareAuthViewController : MMUIViewController
{
    BOOL bIsFromSysCopy; // +0x68
    int _type; // +0x6c
    unsigned int _msgType; // +0x70
    unsigned int _msgSubType; // +0x74
    id <WCShareAuthViewControllerDelegate> _delegate; // +0x78
    NSString * _appName; // +0x80
    NSString * _extText; // +0x88
    NSString * _extUrl; // +0x90
    NSString * _desc; // +0x98
    NSString * _appBrandUserName; // +0xa0
    NSString * _appBrandPath; // +0xa8
    NSString * _userOpenId; // +0xb0
    NSString * _songAlbumUrl; // +0xb8
    UIView * _scrollView; // +0xc0
    UIView * _errView; // +0xc8
    UIImageView * _errIconImgView; // +0xd0
    MMUILabel * _detailLabel; // +0xd8
    UIButton * _backBtn; // +0xe0
    OpenApiParameter * _openParam; // +0xe8
}
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 songAlbumUrl:(id)arg6;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 desc:(id)arg6 extraData:(id)arg7;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 desc:(id)arg6 songAlbumUrl:(id)arg7 extraData:(id)arg8;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 msgSubType:(unsigned int)arg6 desc:(id)arg7 songAlbumUrl:(id)arg8 extraData:(id)arg9;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)makeLink;
- (id)makeStateDeepLinkParam;
- (id)getType;
- (void)onBackBtnClick:(id)arg1;
- (void)goBack;
- (void)didSuccessWithResult:(id)arg1;
- (void)didFail:(id)arg1;
- (BOOL)checkOpensdkFieldOptions;
- (BOOL)checkMusicFieldOptions;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (void)didNeedRedirectUrlWithResult:(id)arg1;
- (void)sendAuthRequest;
- (void)checkIfNeedUpdateAppDataFromServer:(id)arg1 version:(unsigned int)arg2;
- (void)showErrorView:(id)arg1;
- (void)layoutErrorView;
- (void)viewDidLayoutSubviews;
- (void)reportTranslateLinkFail:(id)arg1 result:(id)arg2;
- (BOOL)bIsFromSysCopy;
- (void)setBIsFromSysCopy:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)extText;
- (void)setExtText:(id)arg1;
- (id)extUrl;
- (void)setExtUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)msgSubType;
- (void)setMsgSubType:(unsigned int)arg1;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandPath;
- (void)setAppBrandPath:(id)arg1;
- (id)userOpenId;
- (void)setUserOpenId:(id)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)errView;
- (void)setErrView:(id)arg1;
- (id)errIconImgView;
- (void)setErrIconImgView:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (void).cxx_destruct;
@end

