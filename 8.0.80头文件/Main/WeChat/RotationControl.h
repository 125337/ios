@interface RotationControl : NSObject
{
    float mDeltaX; // +0x8
    float mDeltaY; // +0xc
    BOOL mTouchControlEnable; // +0x10
    BOOL mSensorControlEnable; // +0x11
    BOOL mKeepLastSensor; // +0x12
    BOOL mIsEnableScale; // +0x13
    _GLKMatrix4 mModelMatrix; // +0x20
    _GLKMatrix4 mViewMatrix; // +0x60
    _GLKMatrix4 mPerspectiveMatrix; // +0xa0
    _GLKMatrix4 mMVPMatrix; // +0xe0
    _GLKMatrix4 mMVMatrix; // +0x120
    float mHalfFOVHor; // +0x160
    float mHalfFOVVer; // +0x164
    float mMaxHalfFOVHor; // +0x168
    float mMinHalfFOVHor; // +0x16c
    float mMaxHalfFOVVer; // +0x170
    float mMinHalfFOVVer; // +0x174
    CGPoint mPrevPoint; // +0x178
    float sDensity; // +0x188
    float sDamping; // +0x18c
    float mGlobalScale; // +0x190
    float mTouchSensitivity; // +0x194
    float mScaleVal; // +0x198
    float mSensitivity; // +0x19c
    int mViewWidth; // +0x1a0
    int mViewHeight; // +0x1a4
    BOOL mRegistered; // +0x1a8
    BOOL mInitSensorInfo; // +0x1a9
    float mPitch; // +0x1ac
    float mYaw; // +0x1b0
    float mSensorDensity; // +0x1b4
    CMMotionManager * _mMotionManager; // +0x1b8
}
- (id)init;
- (void)reset;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)setDeltaXAndY:(float)arg1 DeltaY:(float)arg2;
- (float)getDeltaY;
- (float)getDeltaX;
- (void)setPerspectiveMatrix:(float)arg1 Right:(float)arg2 Bottom:(float)arg3 Top:(float)arg4 Near:(float)arg5 Far:(float)arg6;
- (void)updataViewMatrix;
- (float *)getRotation;
- (int)registerSensor;
- (int)unregisterSensor;
- (void)setHalfFOVHor:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (void)setHalfFOVVer:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (void)setSmallHalfFOVVer:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (float)scaled:(float)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)setScalePerspectiveMatrix;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (id)mMotionManager;
- (void)setMMotionManager:(id)arg1;
- (void).cxx_destruct;
@end
