/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPProblemCollectionResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    NSString *_problemID;
    int _statusCode;
}

@property(readonly) BOOL hasProblemID;
@property BOOL hasStatusCode;
@property(retain) NSString * problemID;
@property int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProblemID;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)problemID;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setProblemID:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end