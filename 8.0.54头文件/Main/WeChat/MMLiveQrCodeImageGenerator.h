@interface MMLiveQrCodeImageGenerator : NSObject
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3;
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3 paddingRatio:(double)arg4 backgroundColor:(id)arg5 foregroundColor:(id)arg6 centerImage:(id)arg7 centerImageRatio:(double)arg8 style:(unsigned long long)arg9;
+ (id)standardStyleQrCodeImageWithEncodedQrCode:(QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5 centerImage:(id)arg6 centerImageRatio:(double)arg7;
+ (id)bulletsStyleQrCodeImageWithEncodedQrCode:(QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5 centerImage:(id)arg6 centerImageRatio:(double)arg7;
+ (CGImage *)createSquareCgImageForCenterImage:(id)arg1;
@end

