@interface SnsAlbumFeedBehaviour : NSObject <SnsRepotable>
{
    BOOL _isDetailSession; // +0x8
    unsigned int _source; // +0xc
    unsigned int _feedType; // +0x10
    unsigned int _ifAddText; // +0x14
    unsigned int _feedMediaCount; // +0x18
    unsigned int _isClickedFromAlbum; // +0x1c
    unsigned int _isClickIntoDetail; // +0x20
    unsigned int _browsedPicCountAtDetail; // +0x24
    unsigned int _browsedPicCountAtGallery; // +0x28
    unsigned int _browseTimeAtDetail; // +0x2c
    unsigned int _browseTimeAtGallery; // +0x30
    unsigned int _canViewCommentCount; // +0x34
    unsigned int _canViewLikeCount; // +0x38
    unsigned int _commentFlag; // +0x3c
    unsigned int _likeFlag; // +0x40
    NSString * _toUsername; // +0x48
    NSString * _feedId; // +0x50
    long long _modifyTogetherOperation; // +0x58
    long long _browseSceneType; // +0x60
    NSString * _albumSessionID; // +0x68
    NSMutableSet * _galleryBrowseMediaSet; // +0x70
    NSMutableSet * _detailPageBrowsePicSet; // +0x78
}
- (id)init;
- (void)recordCommentFlag:(int)arg1;
- (void)recordLikeFlag:(int)arg1;
- (void)recordModifyTogetherOperation:(long long)arg1;
- (void)recordDetailPageBrowseMedia:(id)arg1;
- (void)recordGalleryBrowseMedia:(id)arg1;
- (void)incGalleryStayTime:(unsigned int)arg1;
- (void)incFeedDetailStayTime:(unsigned int)arg1;
- (unsigned int)protocolID;
- (void)doReport;
- (id)logStr;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned int)feedType;
- (void)setFeedType:(unsigned int)arg1;
- (unsigned int)ifAddText;
- (void)setIfAddText:(unsigned int)arg1;
- (unsigned int)feedMediaCount;
- (void)setFeedMediaCount:(unsigned int)arg1;
- (unsigned int)isClickedFromAlbum;
- (void)setIsClickedFromAlbum:(unsigned int)arg1;
- (unsigned int)isClickIntoDetail;
- (void)setIsClickIntoDetail:(unsigned int)arg1;
- (unsigned int)browsedPicCountAtDetail;
- (void)setBrowsedPicCountAtDetail:(unsigned int)arg1;
- (unsigned int)browsedPicCountAtGallery;
- (void)setBrowsedPicCountAtGallery:(unsigned int)arg1;
- (unsigned int)browseTimeAtDetail;
- (void)setBrowseTimeAtDetail:(unsigned int)arg1;
- (unsigned int)browseTimeAtGallery;
- (void)setBrowseTimeAtGallery:(unsigned int)arg1;
- (unsigned int)canViewCommentCount;
- (void)setCanViewCommentCount:(unsigned int)arg1;
- (unsigned int)canViewLikeCount;
- (void)setCanViewLikeCount:(unsigned int)arg1;
- (unsigned int)commentFlag;
- (void)setCommentFlag:(unsigned int)arg1;
- (unsigned int)likeFlag;
- (void)setLikeFlag:(unsigned int)arg1;
- (long long)modifyTogetherOperation;
- (void)setModifyTogetherOperation:(long long)arg1;
- (long long)browseSceneType;
- (void)setBrowseSceneType:(long long)arg1;
- (id)albumSessionID;
- (void)setAlbumSessionID:(id)arg1;
- (BOOL)isDetailSession;
- (void)setIsDetailSession:(BOOL)arg1;
- (id)galleryBrowseMediaSet;
- (void)setGalleryBrowseMediaSet:(id)arg1;
- (id)detailPageBrowsePicSet;
- (void)setDetailPageBrowsePicSet:(id)arg1;
- (void).cxx_destruct;
@end

