@interface WCTogetherFeedViewItem : NSObject
{
    NSString * _togetherText; // +0x8
    BOOL _canShowTextState; // +0x10
    BOOL _locationClickable; // +0x11
    BOOL _showsImageCount; // +0x12
    BOOL _isPlayingVideo; // +0x13
    BOOL _hasLinkIcon; // +0x14
    NSMutableDictionary * _cachedHeightForTogetherText; // +0x18
    Class _cellClass; // +0x20
    WCDataItem * _dataItem; // +0x28
    id <WCTogetherFeedViewItemDelegate> _delegate; // +0x30
    CContact * _contact; // +0x38
    NSString * _username; // +0x40
    NSString * _displayName; // +0x48
    NSArray * _togetherUsernames; // +0x50
    NSString * _dateText; // +0x58
    NSString * _displayLocation; // +0x60
    NSString * _text; // +0x68
    NSString * _textParserPattern; // +0x70
    NSArray * _textRichStyles; // +0x78
    NSArray * _imageViewModels; // +0x80
    NSString * _imageCountText; // +0x88
    WCMediaItem * _videoMediaItem; // +0x90
    WCImageViewModel * _linkIconViewModel; // +0x98
    NSURL * _linkIconURL; // +0xa0
    NSURL * _linkIconResourceIdentifier; // +0xa8
    NSString * _linkPlayIconSVGName; // +0xb0
    NSString * _linkTitle; // +0xb8
    NSString * _linkSubtitle; // +0xc0
    WCContentItemFinderViewModel * _finderViewModel; // +0xc8
    CGSize _textSize; // +0xd0
}
- (id)initWithDataItem:(id)arg1;
- (void)loadContactInfo;
- (id)_contactFromDataItem:(id)arg1;
- (id)_displayNameFromContact:(id)arg1;
- (BOOL)_isAdDataItem:(id)arg1;
- (id)_displayNameFromAdDataItem:(id)arg1;
- (void)didClickContactInfo;
- (void)loadTogetherContactsInfo;
- (id)togetherText;
- (id)togetherTextForDataItem:(id)arg1;
- (id)cachedHeightForTogetherText;
- (double)cachedHeightForTogetherTextWithWidth:(double)arg1;
- (void)cacheHeight:(double)arg1 forTogetherTextWithWidth:(double)arg2;
- (void)loadLocationInfo;
- (void)didClickLocationInfo;
- (void)loadContent;
- (void)_loadContentForText;
- (void)_loadContentForImages;
- (void)_loadContentForVideo;
- (void)_loadContentForLink;
- (id)createDefaultLinkImage:(CGSize)arg1;
- (void)_loadContentForFinder;
- (void)startPlayingVideo;
- (void)stopPlayingVideo;
- (id)_safeURLWithString:(id)arg1;
- (int)_photoTypeForContentItem:(id)arg1;
- (void)didClickContentDetail;
- (void)didClickMediaItem:(id)arg1;
- (Class)cellClass;
- (id)dataItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)canShowTextState;
- (void)setCanShowTextState:(BOOL)arg1;
- (id)togetherUsernames;
- (void)setTogetherUsernames:(id)arg1;
- (id)dateText;
- (void)setDateText:(id)arg1;
- (id)displayLocation;
- (void)setDisplayLocation:(id)arg1;
- (BOOL)locationClickable;
- (void)setLocationClickable:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)textParserPattern;
- (void)setTextParserPattern:(id)arg1;
- (CGSize)textSize;
- (void)setTextSize:(CGSize)arg1;
- (id)textRichStyles;
- (void)setTextRichStyles:(id)arg1;
- (id)imageViewModels;
- (void)setImageViewModels:(id)arg1;
- (id)imageCountText;
- (void)setImageCountText:(id)arg1;
- (BOOL)showsImageCount;
- (void)setShowsImageCount:(BOOL)arg1;
- (id)videoMediaItem;
- (void)setVideoMediaItem:(id)arg1;
- (BOOL)isPlayingVideo;
- (void)setIsPlayingVideo:(BOOL)arg1;
- (BOOL)hasLinkIcon;
- (void)setHasLinkIcon:(BOOL)arg1;
- (id)linkIconViewModel;
- (void)setLinkIconViewModel:(id)arg1;
- (id)linkIconURL;
- (void)setLinkIconURL:(id)arg1;
- (id)linkIconResourceIdentifier;
- (void)setLinkIconResourceIdentifier:(id)arg1;
- (id)linkPlayIconSVGName;
- (void)setLinkPlayIconSVGName:(id)arg1;
- (id)linkTitle;
- (void)setLinkTitle:(id)arg1;
- (id)linkSubtitle;
- (void)setLinkSubtitle:(id)arg1;
- (id)finderViewModel;
- (void)setFinderViewModel:(id)arg1;
- (void).cxx_destruct;
@end
