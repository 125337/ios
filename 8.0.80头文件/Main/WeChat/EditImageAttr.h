@interface EditImageAttr : MMObject <NSCoding>
{
    BOOL _isEdited; // +0x8
    BOOL _isEditedForReport; // +0x9
    NSString * _url; // +0x10
    UIImage * _editedImage; // +0x18
    NSString * _editedImageAssetId; // +0x20
    NSArray * _editedWidgetStateList; // +0x28
    NSMutableArray * _editedImages; // +0x30
    NSMutableArray * _selectGifDatas; // +0x38
    UIImage * _unCropImage; // +0x40
    NSMutableDictionary * _editImageAttrDic; // +0x48
    NSMutableArray * _drawViewArray; // +0x50
    CALayer * _overlayLayer; // +0x58
    WCLocationInfo * _locationInfo; // +0x60
    NSString * _poiReportStr4Commit; // +0x68
    unsigned long long _startEditTimeInMs; // +0x70
    EditStoryImageAttr * _storyAttr; // +0x78
    EditVideoBGMSelectedMusicInfo * _musicInfo; // +0x80
    NSURL * _patMusicURL; // +0x88
    FinderMusicReportInfo * _imageMusicReportInfo; // +0x90
    EditFinderImageAttr * _finderAttr; // +0x98
    NSString * _imageEditId; // +0xa0
    UIImage * _originalImage; // +0xa8
    NSMutableDictionary * _userInfo; // +0xb0
    NSMutableArray * _assets; // +0xb8
    double _snsCoverOffset; // +0xc0
    unsigned long long _editorSessionId; // +0xc8
    NSString * _yuanbaoTemplateId; // +0xd0
    NSString * _yuanbaoPhotoPath; // +0xd8
    NSString * _yuanbaoVideoPath; // +0xe0
    unsigned long long _cameraEnterSessionID; // +0xe8
    CGSize _cropSize; // +0xf0
    CGRect _cropRect; // +0x100
}
+ (id)generateWidgetViewListFromWidgetStateList:(id)arg1 forCanvasSize:(CGSize)arg2;
+ (id)generateWidgetCanvasViewFromWidgetViewList:(id)arg1 forCanvasSize:(CGSize)arg2;
+ (id)generateWidgetCanvasViewThumbFromView:(id)arg1 atTimeOffsetSec:(double)arg2 forSize:(CGSize)arg3;
+ (id)generateWidgetCanvasAnimateLayerFromView:(id)arg1 forSize:(CGSize)arg2;
+ (id)generateMergedImageFromImageList:(id)arg1 forSize:(CGSize)arg2;
- (id)getByPassInfoObjectForKey:(id)arg1;
- (void)setImagePickerByPassInfo:(id)arg1;
- (id)getImagePickerByPassInfo;
- (void)generateImageMusicReportInfo;
- (id)initWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)getTexts:(id)arg1 andEmotionMd5s:(id)arg2;
- (id)userInfo;
- (id)generateWidgetViewListForCanvasSize:(CGSize)arg1;
- (id)generateWidgetCanvasViewForSize:(CGSize)arg1;
- (id)generateWidgetCanvasAnimateLayerForSize:(CGSize)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)editedImage;
- (void)setEditedImage:(id)arg1;
- (id)editedImageAssetId;
- (void)setEditedImageAssetId:(id)arg1;
- (id)editedWidgetStateList;
- (void)setEditedWidgetStateList:(id)arg1;
- (id)editedImages;
- (void)setEditedImages:(id)arg1;
- (id)selectGifDatas;
- (void)setSelectGifDatas:(id)arg1;
- (id)unCropImage;
- (void)setUnCropImage:(id)arg1;
- (id)editImageAttrDic;
- (void)setEditImageAttrDic:(id)arg1;
- (id)drawViewArray;
- (void)setDrawViewArray:(id)arg1;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)arg1;
- (id)overlayLayer;
- (void)setOverlayLayer:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)poiReportStr4Commit;
- (void)setPoiReportStr4Commit:(id)arg1;
- (unsigned long long)startEditTimeInMs;
- (void)setStartEditTimeInMs:(unsigned long long)arg1;
- (id)storyAttr;
- (void)setStoryAttr:(id)arg1;
- (CGRect)cropRect;
- (void)setCropRect:(CGRect)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)patMusicURL;
- (void)setPatMusicURL:(id)arg1;
- (id)imageMusicReportInfo;
- (void)setImageMusicReportInfo:(id)arg1;
- (id)finderAttr;
- (void)setFinderAttr:(id)arg1;
- (id)imageEditId;
- (void)setImageEditId:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (double)snsCoverOffset;
- (void)setSnsCoverOffset:(double)arg1;
- (unsigned long long)editorSessionId;
- (void)setEditorSessionId:(unsigned long long)arg1;
- (id)yuanbaoTemplateId;
- (void)setYuanbaoTemplateId:(id)arg1;
- (id)yuanbaoPhotoPath;
- (void)setYuanbaoPhotoPath:(id)arg1;
- (id)yuanbaoVideoPath;
- (void)setYuanbaoVideoPath:(id)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (BOOL)isEditedForReport;
- (void)setIsEditedForReport:(BOOL)arg1;
- (unsigned long long)cameraEnterSessionID;
- (void)setCameraEnterSessionID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
