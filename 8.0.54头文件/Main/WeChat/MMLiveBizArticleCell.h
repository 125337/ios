@interface MMLiveBizArticleCell : UITableViewCell
{
    BizAppMsgDetailInfo * _article; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _datetimeLabel; // +0x18
    MMWebImageView * _thumbnailImageView; // +0x20
}
+ (id)cellIdentifier;
+ (double)heightForArticle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setArticle:(id)arg1;
- (void)articleDidUpdate;
- (void)layoutSubviews;
- (id)article;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)datetimeLabel;
- (void)setDatetimeLabel:(id)arg1;
- (id)thumbnailImageView;
- (void)setThumbnailImageView:(id)arg1;
- (void).cxx_destruct;
@end

