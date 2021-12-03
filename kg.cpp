GLfloat vertex_buffer_data[370*9];
    GLfloat vertex_color_data[370*9];
    GLfloat temp_vertex_buffer_data[] = {
        0.0, 1.25, 0.01,
        1.25, 1.25, 0.01,
        0.0, 0.75, 0.01,

        1.25, 1.25, 0.01,
        0.0, 0.75, 0.01,
        1.25, 0.75, 0.01,

        -1.0, 1.0, 0.0,
        1.0, 1.0, 0.0,
        -1.0, -1.0, 0.0,

        1.0, 1.0, 0.0,
        -1.0, -1.0, 0.0,
        1.0, -1.0, 0.0,

        -1.0, 1.0, 0.0,
        -1.5, 1.0, 0.0,
        -1.5, -1.0, 0.0,

        -1.0, 1.0, 0.0,
        -1.5, -1.0, 0.0,
        -1.0, -1.0, 0.0,

        -1.0, -1.0, 0.0,
        -1.0, -1.75, 0.0,
        -0.5, -1.0, 0.0,

        -1.0, -1.75, 0.0,
        -0.5, -1.0, 0.0,
        -0.5, -1.75, 0.0,

        0.5, -1.75, 0.0,
        0.5, -1.0, 0.0,
        1.0, -1.0, 0.0,

        0.5, -1.75, 0.0,
        1.0, -1.75, 0.0,
        1.0, -1.0, 0.0
    };
    GLfloat temp_color_buffer_data[]= {
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),

        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),

        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),

        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),
        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),
        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),

        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),
        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),
        (GLfloat)(color2.r/255.0), (GLfloat)(color2.g/255.0), (GLfloat)(color2.b/255.0),

        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),

        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0),
        (GLfloat)(color1.r/255.0), (GLfloat)(color1.g/255.0), (GLfloat)(color1.b/255.0)
    };
    for( int i =0 ; i<360 ; i++){
        GLfloat x1,y1,z1,x2,y2,z2,x3,y3,z3;
        x1 = 0.0;
        y1 = 0.0;
        z1 = 0.005;
        y2 = cos(i*(M_PI/180.0));
        x2 = sin(i*(M_PI/180.0));
        z2 = 0.005;
        y3 = cos((i+1)*(M_PI/180.0));
        x3 = sin((i+1)*(M_PI/180.0));
        z3 = 0.005;
        int j = i*9;
        vertex_buffer_data[j+0] = (x1+0)/6.5;
        vertex_buffer_data[j+1] = (y1+1)/6.5;
        vertex_buffer_data[j+2] = (z1)/6.5;
        vertex_buffer_data[j+3] = (x2+0)/6.5;
        vertex_buffer_data[j+4] = (y2+1)/6.5;
        vertex_buffer_data[j+5] = (z2)/6.5;
        vertex_buffer_data[j+6] = (x3+0)/6.5;
        vertex_buffer_data[j+7] = (y3+1)/6.5;
        vertex_buffer_data[j+8] = (z3)/6.5;
        for(int t=0;t<3;t++){
            vertex_color_data[j+3*t+0] = (GLfloat)(color2.r/255.0);
            vertex_color_data[j+3*t+1] = (GLfloat)(color2.g/255.0);
            vertex_color_data[j+3*t+2] = (GLfloat)(color2.b/255.0);
        }
    }
    for(int i=0;i<90;i++){
        vertex_buffer_data[360*9+i] = temp_vertex_buffer_data[i]/6.5;
        vertex_color_data[360*9+i] = temp_color_buffer_data[i];
    }