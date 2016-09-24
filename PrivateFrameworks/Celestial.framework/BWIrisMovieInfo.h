/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _audioOffset;
    BOOL  _finalEnqueuedIrisRequest;
    BOOL  _finalReferenceMovie;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _masterMovieStartTime;
    NSURL * _masterMovieURL;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _movieEndTime;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _movieStartTime;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _movieTrimEndTime;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _movieTrimStartTime;
    BOOL  _originalPhotoRecording;
    NSURL * _outputMovieURL;
    FigCaptureMovieFileRecordingSettings * _settings;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _stillImageCaptureHostTime;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _stillImageCaptureTime;
    BOOL  _stillImageEncoderKeyFrameEmitted;
    BOOL  _stillImageVISKeyFrameTagged;
    NSURL * _temporaryMovieURL;
}

@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } audioOffset;
@property (nonatomic, readonly) BOOL containsTrims;
@property (getter=isFinalEnqueuedIrisRequest, nonatomic) BOOL finalEnqueuedIrisRequest;
@property (getter=isFinalReferenceMovie, nonatomic) BOOL finalReferenceMovie;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } masterMovieStartTime;
@property (nonatomic, retain) NSURL *masterMovieURL;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } movieEndTime;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } movieStartTime;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } movieTrimEndTime;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } movieTrimStartTime;
@property (nonatomic, readonly) int numberOfRequestedVariants;
@property (getter=isOriginalPhotoRecording, nonatomic) BOOL originalPhotoRecording;
@property (nonatomic, retain) NSURL *outputMovieURL;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } stillImageCaptureHostTime;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } stillImageCaptureTime;
@property (nonatomic) BOOL stillImageEncoderKeyFrameEmitted;
@property (nonatomic) BOOL stillImageVISKeyFrameTagged;
@property (nonatomic, retain) NSURL *temporaryMovieURL;

+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 stillImageCaptureHostTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg3 originalPhotoRecording:(BOOL)arg4;

- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 stillImageCaptureHostTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg3 originalPhotoRecording:(BOOL)arg4;
- (struct { int x1; int x2; unsigned int x3; int x4; })audioOffset;
- (BOOL)containsTrims;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isFinalEnqueuedIrisRequest;
- (BOOL)isFinalReferenceMovie;
- (BOOL)isOriginalPhotoRecording;
- (struct { int x1; int x2; unsigned int x3; int x4; })masterMovieStartTime;
- (id)masterMovieURL;
- (struct { int x1; int x2; unsigned int x3; int x4; })movieEndTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })movieStartTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })movieTrimEndTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })movieTrimStartTime;
- (int)numberOfRequestedVariants;
- (id)outputMovieURL;
- (void)setAudioOffset:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setFinalEnqueuedIrisRequest:(BOOL)arg1;
- (void)setFinalReferenceMovie:(BOOL)arg1;
- (void)setMasterMovieStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMasterMovieURL:(id)arg1;
- (void)setMovieEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMovieStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMovieTrimEndTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMovieTrimStartTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setOriginalPhotoRecording:(BOOL)arg1;
- (void)setOutputMovieURL:(id)arg1;
- (void)setStillImageCaptureTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setStillImageEncoderKeyFrameEmitted:(BOOL)arg1;
- (void)setStillImageVISKeyFrameTagged:(BOOL)arg1;
- (void)setTemporaryMovieURL:(id)arg1;
- (id)settings;
- (struct { int x1; int x2; unsigned int x3; int x4; })stillImageCaptureHostTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })stillImageCaptureTime;
- (BOOL)stillImageEncoderKeyFrameEmitted;
- (BOOL)stillImageVISKeyFrameTagged;
- (id)temporaryMovieURL;

@end