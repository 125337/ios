@interface BizShareInfo : NSObject
{
    NSNumber * _shareType; // +0x8
    NSString * _url; // +0x10
    NSString * _title; // +0x18
    NSString * _imgUrl; // +0x20
    NSString * _desc; // +0x28
    NSNumber * _itemShowType; // +0x30
    NSString * _coverPicImageUrl; // +0x38
    NSNumber * _coverPicWidth; // +0x40
    NSNumber * _coverPicHeight; // +0x48
    NSNumber * _picCount; // +0x50
    NSString * _srcUsername; // +0x58
    NSString * _displayUsername; // +0x60
    NSString * _msgSvrId; // +0x68
    NSString * _msgId; // +0x70
    BizFinderFeedShareInfo * _finderFeed; // +0x78
    NSNumber * _isSingleImage; // +0x80
    NSNumber * _saveImageOnly; // +0x88
    NSString * _contentId; // +0x90
    NSNumber * _replyId; // +0x98
    NSNumber * _imgIndex; // +0xa0
    NSString * _sceneType; // +0xa8
    NSString * _webViewId; // +0xb0
    NSString * _articleUrl; // +0xb8
    NSNumber * _enableFrontShareImg; // +0xc0
}
+ (id)makeWithShareType:(id)arg1 url:(id)arg2 title:(id)arg3 imgUrl:(id)arg4 desc:(id)arg5 itemShowType:(id)arg6 coverPicImageUrl:(id)arg7 coverPicWidth:(id)arg8 coverPicHeight:(id)arg9 picCount:(id)arg10 srcUsername:(id)arg11 displayUsername:(id)arg12 msgSvrId:(id)arg13 msgId:(id)arg14 finderFeed:(id)arg15 isSingleImage:(id)arg16 saveImageOnly:(id)arg17 contentId:(id)arg18 replyId:(id)arg19 imgIndex:(id)arg20 sceneType:(id)arg21 webViewId:(id)arg22 articleUrl:(id)arg23 enableFrontShareImg:(id)arg24;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)shareType;
- (void)setShareType:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)coverPicImageUrl;
- (void)setCoverPicImageUrl:(id)arg1;
- (id)coverPicWidth;
- (void)setCoverPicWidth:(id)arg1;
- (id)coverPicHeight;
- (void)setCoverPicHeight:(id)arg1;
- (id)picCount;
- (void)setPicCount:(id)arg1;
- (id)srcUsername;
- (void)setSrcUsername:(id)arg1;
- (id)displayUsername;
- (void)setDisplayUsername:(id)arg1;
- (id)msgSvrId;
- (void)setMsgSvrId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)finderFeed;
- (void)setFinderFeed:(id)arg1;
- (id)isSingleImage;
- (void)setIsSingleImage:(id)arg1;
- (id)saveImageOnly;
- (void)setSaveImageOnly:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)replyId;
- (void)setReplyId:(id)arg1;
- (id)imgIndex;
- (void)setImgIndex:(id)arg1;
- (id)sceneType;
- (void)setSceneType:(id)arg1;
- (id)webViewId;
- (void)setWebViewId:(id)arg1;
- (id)articleUrl;
- (void)setArticleUrl:(id)arg1;
- (id)enableFrontShareImg;
- (void)setEnableFrontShareImg:(id)arg1;
- (void).cxx_destruct;
@end
