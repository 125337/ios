@interface BoxBizFinderPigeonInfo : NSObject
{
    NSString * _fromSessionIdInfo; // +0x8
    NSString * _objectId; // +0x10
    NSString * _exportId; // +0x18
    NSString * _nonceId; // +0x20
    NSNumber * _mediaType; // +0x28
    NSString * _encryptUsername; // +0x30
    NSString * _reportInfo; // +0x38
    NSNumber * _alignment; // +0x40
    NSNumber * _bizFromScene; // +0x48
    NSString * _title; // +0x50
    NSString * _coverImgUrl; // +0x58
    NSString * _nickName; // +0x60
    NSString * _headImgUrl; // +0x68
    NSNumber * _finderDuration; // +0x70
    NSNumber * _finderHeight; // +0x78
    NSNumber * _finderWidth; // +0x80
    NSNumber * _finderCoverHeight; // +0x88
    NSNumber * _finderCoverWidth; // +0x90
    NSNumber * _finderMediaType; // +0x98
    NSNumber * _currentPlayMs; // +0xa0
    NSNumber * _isLandscapeVideo; // +0xa8
    FlutterStandardTypedData * _animatedImage; // +0xb0
    BoxBizRect * _animatedImageRect; // +0xb8
}
+ (id)makeWithFromSessionIdInfo:(id)arg1 objectId:(id)arg2 exportId:(id)arg3 nonceId:(id)arg4 mediaType:(id)arg5 encryptUsername:(id)arg6 reportInfo:(id)arg7 alignment:(id)arg8 bizFromScene:(id)arg9 title:(id)arg10 coverImgUrl:(id)arg11 nickName:(id)arg12 headImgUrl:(id)arg13 finderDuration:(id)arg14 finderHeight:(id)arg15 finderWidth:(id)arg16 finderCoverHeight:(id)arg17 finderCoverWidth:(id)arg18 finderMediaType:(id)arg19 currentPlayMs:(id)arg20 isLandscapeVideo:(id)arg21 animatedImage:(id)arg22 animatedImageRect:(id)arg23;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)fromSessionIdInfo;
- (void)setFromSessionIdInfo:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)mediaType;
- (void)setMediaType:(id)arg1;
- (id)encryptUsername;
- (void)setEncryptUsername:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)alignment;
- (void)setAlignment:(id)arg1;
- (id)bizFromScene;
- (void)setBizFromScene:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverImgUrl;
- (void)setCoverImgUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)finderDuration;
- (void)setFinderDuration:(id)arg1;
- (id)finderHeight;
- (void)setFinderHeight:(id)arg1;
- (id)finderWidth;
- (void)setFinderWidth:(id)arg1;
- (id)finderCoverHeight;
- (void)setFinderCoverHeight:(id)arg1;
- (id)finderCoverWidth;
- (void)setFinderCoverWidth:(id)arg1;
- (id)finderMediaType;
- (void)setFinderMediaType:(id)arg1;
- (id)currentPlayMs;
- (void)setCurrentPlayMs:(id)arg1;
- (id)isLandscapeVideo;
- (void)setIsLandscapeVideo:(id)arg1;
- (id)animatedImage;
- (void)setAnimatedImage:(id)arg1;
- (id)animatedImageRect;
- (void)setAnimatedImageRect:(id)arg1;
- (void).cxx_destruct;
@end
