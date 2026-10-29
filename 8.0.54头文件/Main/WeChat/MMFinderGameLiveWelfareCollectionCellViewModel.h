@interface MMFinderGameLiveWelfareCollectionCellViewModel : NSObject
{
    BOOL _showDegreeOfCompletion; // +0x8
    BOOL _needShow; // +0x9
    BOOL _isUseLocalPic; // +0xa
    NSString * _taskDesc; // +0x10
    double _degreeOfCompletion; // +0x18
    NSString * _imageUrl; // +0x20
    double _cellWidth; // +0x28
    NSString * _reportExtInfoJson; // +0x30
}
+ (id)cellIdentifier;
+ (Class)cellClass;
- (void)calculateCellWidth;
- (id)taskDesc;
- (void)setTaskDesc:(id)arg1;
- (BOOL)isShowDegreeOfCompletion;
- (void)setShowDegreeOfCompletion:(BOOL)arg1;
- (double)degreeOfCompletion;
- (void)setDegreeOfCompletion:(double)arg1;
- (BOOL)isNeedShow;
- (void)setNeedShow:(BOOL)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (id)reportExtInfoJson;
- (void)setReportExtInfoJson:(id)arg1;
- (BOOL)isUseLocalPic;
- (void)setIsUseLocalPic:(BOOL)arg1;
- (void).cxx_destruct;
@end

