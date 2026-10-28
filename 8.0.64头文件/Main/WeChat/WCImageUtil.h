@interface WCImageUtil : NSObject
+ (id)generatePaddedImgWithCentralImg:(id)arg1 centralSize:(CGSize)arg2 targetSize:(CGSize)arg3 fillColor:(id)arg4;
+ (id)generateCommentPlaceHolderImageWithTargetSize:(CGSize)arg1 imgName:(id)arg2;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getTimeLineCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getMsgListCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio3_4;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio1_1;
+ (id)getDetailCommentPlaceHolderImageWithAspectRatio4_3;
+ (id)getTimeLineCommentLoadFailImageWithRatio:(double)arg1;
+ (id)getTLEmoticonThumbLoadFailImageWithTargetSize:(CGSize)arg1;
@end
