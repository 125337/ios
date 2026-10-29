@interface ResourceCountView : UIView
{
    UIImageView * _arrowImageView; // +0x8
    UIImageView * _recordImageView; // +0x10
    UILabel * _recordCountLabel; // +0x18
    UIImageView * _fileImageView; // +0x20
    UILabel * _fileCountLabel; // +0x28
    UIImageView * _videoImageView; // +0x30
    UILabel * _videoCountLabel; // +0x38
    UIImageView * _imgImageView; // +0x40
    UILabel * _imgCountLabel; // +0x48
    unsigned long long _imageCount; // +0x50
    unsigned long long _videoCount; // +0x58
    unsigned long long _fileCount; // +0x60
    unsigned long long _recordCount; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)recordImageView;
- (void)setRecordImageView:(id)arg1;
- (id)recordCountLabel;
- (void)setRecordCountLabel:(id)arg1;
- (id)fileImageView;
- (void)setFileImageView:(id)arg1;
- (id)fileCountLabel;
- (void)setFileCountLabel:(id)arg1;
- (id)videoImageView;
- (void)setVideoImageView:(id)arg1;
- (id)videoCountLabel;
- (void)setVideoCountLabel:(id)arg1;
- (id)imgImageView;
- (void)setImgImageView:(id)arg1;
- (id)imgCountLabel;
- (void)setImgCountLabel:(id)arg1;
- (unsigned long long)imageCount;
- (void)setImageCount:(unsigned long long)arg1;
- (unsigned long long)videoCount;
- (void)setVideoCount:(unsigned long long)arg1;
- (unsigned long long)fileCount;
- (void)setFileCount:(unsigned long long)arg1;
- (unsigned long long)recordCount;
- (void)setRecordCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
